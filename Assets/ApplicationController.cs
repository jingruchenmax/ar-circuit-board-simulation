using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ApplicationController : MonoBehaviour
{
    // Start is called before the first frame update
    public void ApplicationRestart()
    {
        SceneManager.LoadScene(0);
    }

    public void ApplicationQuit()
    {
        Application.Quit();
    }
}
