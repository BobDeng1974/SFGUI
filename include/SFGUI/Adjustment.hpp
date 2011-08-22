#pragma once
#include <SFGUI/Config.hpp>
#include <SFGUI/Object.hpp>

namespace sfg {

/** Scrollbar/Slider Adjustment.
 */
class SFGUI_API Adjustment : public Object {
	public:
		typedef boost::shared_ptr<Adjustment>  Ptr; //!< Shared pointer.

		/** Ctor.
		 * @param lower Minimum value.
		 * @param upper Maximum value.
		 * @param value Current value.
		 * @param step Minor change value (such as clicking on arrow button).
		 * @param page Major change value (such as clicking on the scroll area).
		 * @param size Page size (how many entries are visible / slider size).
		 */
		Adjustment( float lower, float upper, float value, float step, float page, float size );

		/** Dtor.
		 */
		~Adjustment();

	private:
		float m_lower;
		float m_upper;
		float m_value;
		float m_step;
		float m_page;
		float m_size;
};

}
