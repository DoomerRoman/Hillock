#ifndef HILLOCK_VIEW_KEYEDIT_HPP
#define HILLOCK_VIEW_KEYEDIT_HPP


#include <QKeySequenceEdit>

namespace view {
	class keyedit;
}


class view::keyedit : public QKeySequenceEdit
{
public:
	keyedit();
private:
	void keyPressEvent(QKeyEvent* event);
	void keyReleaseEvent(QKeyEvent* event);
};


#endif // HILLOCK_VIEW_KEYEDIT_HPP