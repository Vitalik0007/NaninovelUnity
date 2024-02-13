using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using Naninovel;
using Naninovel.Commands;
using DTT.MinigameMemory;

public class ExitMiniGame : MonoBehaviour
{
    [SerializeField]
    private MemoryGameManager _gameManager;

    private void OnEnable()
    {
        _gameManager.Finish += ExitMemoryGame;
    }

    private void ExitMemoryGame(MemoryGameResults results)
    {
        StartCoroutine(NaninovelScene());
    }

    IEnumerator NaninovelScene()
    {
        var naniCamera = Engine.GetService<ICameraManager>().Camera;
        naniCamera.enabled = true;

        var scriptPlayer = Engine.GetService<IScriptPlayer>();
        scriptPlayer.PreloadAndPlayAsync("Scene2", label: "DialogAfterGame").Forget();

        var hidePrinter = new HidePrinter();
        hidePrinter.ExecuteAsync().Forget();

        SceneManager.LoadSceneAsync("SampleScene");
        SceneManager.UnloadSceneAsync("PlayGame");

        var inputManager = Engine.GetService<IInputManager>();
        inputManager.ProcessInput = true;

        yield return null;
    }

    private void OnDisable()
    {
        _gameManager.Finish -= ExitMemoryGame;
    }
}
