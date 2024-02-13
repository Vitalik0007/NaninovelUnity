using Naninovel;
using Naninovel.Commands;
using UnityEngine.SceneManagement;

[CommandAlias("miniGame")]
public class StartMiniGame : Command
{
    public override UniTask ExecuteAsync(AsyncToken asyncToken = default)
    {
        var inputManager = Engine.GetService<IInputManager>();
        inputManager.ProcessInput = false;

        var scriptPlayer = Engine.GetService<IScriptPlayer>();
        scriptPlayer.Stop();

        var hidePrinter = new HidePrinter();
        hidePrinter.ExecuteAsync(asyncToken).Forget();

        var naniCamera = Engine.GetService<ICameraManager>().Camera;
        naniCamera.enabled = false;

        var stateManage = Engine.GetService<IUIManager>();
        stateManage.ResetService();

        SceneManager.LoadSceneAsync("PlayGame");

        return UniTask.CompletedTask;
    }
}