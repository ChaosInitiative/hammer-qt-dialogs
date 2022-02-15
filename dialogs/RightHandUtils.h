#pragma once

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QComboBox>
#include <QLabel>

namespace ui
{
	// Here for the zoo, so we can showcase them
	class CRightHandUtils : public QDialog
	{
		Q_OBJECT
	public:
		CRightHandUtils( QWidget *pParent );
	};

	//-----------------------------------------------------------------------------------------//

	class CSelectWidget : public QWidget
	{
		Q_OBJECT
	public:
		CSelectWidget( QWidget *pParent );

		QButtonGroup *m_pSelectGroup;
		QPushButton *m_pGroupsButton;
		QPushButton *m_pObjectsButton;
		QPushButton *m_pSolidsButton;

	private:
		void onGroupsPressed();
		void onObjectsPressed();
		void onSolidsPressed();
	};

	//-----------------------------------------------------------------------------------------//

	class CTextureGroupWidget : public QWidget
	{
		Q_OBJECT
	public:
		CTextureGroupWidget( QWidget *pParent );

		QComboBox *m_pModSelectorBox;
		QComboBox *m_pCurrentTextureBox;

		QPushButton *m_pBrowseButton;
		QPushButton *m_pReplaceButton;
		QPushButton *m_pBrowseButton;
	};
} // namespace ui