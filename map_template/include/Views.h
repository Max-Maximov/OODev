#ifndef MY_VIEWS
#define MY_VIEWS

#include "Interfaces.h"
namespace newmeteo {
	///@brief projective part of main view, frame by itself
	class ProjectiveView : public IView //wxFrame
	{
	public:
		///@brief construct interface, do OGL init
		///! create own presenter, bind events to presenter
		///@param map is object to perform data binding
		ProjectiveView(const IMap *map);
		virtual ~ProjectiveView();

		///@brief accept given presenter
		///@param presenter to be accepted
		virtual void accept(IPresenter *presenter);

		///@brief redraw all
		virtual void redraw();

	private:
		// !NOTE no event handling here
		// only private fields
	};

	///@brief perspective part of main view, frame by itself
	class PerspectiveView : public IView //wxFrame
	{
	public:
		///@brief construct interface, do OGL init
		///! create own presenter, bind events to presenter
		///@param map is object to perform data binding
		PerspectiveView(const IMap *map);
		virtual ~PerspectiveView();

		///@brief accept given presenter
		///@param presenter to be accepted
		virtual void accept(IPresenter *presenter);

		///@brief redraw all
		virtual void redraw();

	private:
		// !NOTE no event handling here
		// only private fields
	};
}
#endif