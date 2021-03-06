
#ifdef _APPLE_

#ifndef _OSXWINDOW_HPP_
#define _OSXWINDOW_HPP_

#include <Platform/Window.hpp>

namespace jerobins {
  namespace platform {
    class OSXWindow : public Window {

    public:
      /**
       * @brief Create a new window with the given parameters.
       *
       * @param name        The name of the window as shown in the title bar.
       * @param height      The height of the window.
       * @param width       The width of the window.
       * @param fullscreen  Specify if fullscreen.
       * @param windowless  Specify if windowless.
       * @param resizable   Specify if resizable.
       */
      OSXWindow(const std::string name, int height = 1080, int width = 1920,
                bool fullscreen = false, bool windowless = false,
                bool resizable = true);

      // Enables or disables borderless
      virtual void Borderless(bool isBorderless) = 0;

      // Enables or disables fullscreen
      virtual void FullScreen(bool isFullScreen) = 0;

      // Hide the window.
      virtual void Hide() = 0;

      // Show the window.
      virtual void Show() = 0;

      // Repaint the window.
      virtual void Repaint() = 0;

      // Set the position of the left of the window.
      virtual void SetX(int x);

      // Set the position of the top of the window.
      virtual void SetY(int y);

      // Set the height of the window.
      virtual void SetHeight(int height);

      // Set the width of th window.
      virtual void SetWidth(int width);

      // Set the position of the top left of the window.
      virtual void SetPosition(int x, int y);

      // Set the size of the window.
      virtual void SetSize(int height, int width);

      // Set the position and size of the window.
      virtual void SetGeometry(int x, int y, int height, int width);

      // Enables or disables fullscreen
      virtual void FullScreen(bool fullscreen);

    private:
      // OSX dependent stuff
    };
  } // namespace platform
} // namespace jerobins

// Header guard
#endif

// if osx
#endif