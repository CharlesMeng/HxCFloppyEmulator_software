// generated by Fast Light User Interface Designer (fluid) version 1.0110

#ifndef filesystem_generator_window_h
#define filesystem_generator_window_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
extern void filesystem_generator_window_bt_injectdir(Fl_Button*, void*);
#include <FL/Fl_Choice.H>
extern void filesystem_generator_window_bt_selectdir(Fl_Button*, void*);
#include <FL/Fl_Input.H>

class filesystem_generator_window {
public:
  filesystem_generator_window();
  Fl_Double_Window *window;
  Fl_Button *bt_injectdir;
  Fl_Button *bt_cancel;
private:
  void cb_bt_cancel_i(Fl_Button*, void*);
  static void cb_bt_cancel(Fl_Button*, void*);
public:
  Fl_Choice *choice_filesystype;
  Fl_Button *bt_selectdir;
  Fl_Input *input_folder;
};
#endif
