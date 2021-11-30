#include "dialogs/MapDiff.h"

#include <QLabel>
#include <QDialogButtonBox>
#include <QHBoxLayout>
#include <QPushButton>

using namespace ui;

CMapDiff::CMapDiff(QWidget* pParent): 
	QDialog(pParent)
{
	this->setWindowTitle(tr("Map Diff"));

	auto pDialogLayout = new QGridLayout(this);
	pDialogLayout->setAlignment(Qt::AlignLeft);

    auto pFindLabel = new QLabel(tr("Map to Diff Against "), this);
	auto pOptionLabel = new QLabel(tr("Diff Options"), this);
	m_pFindName = new QLineEdit(this);
	
	auto pBrowseButton = new QPushButton(this);
	pBrowseButton->setText(tr("Browse"));

	m_pDifSimilairVisgroup = new QCheckBox(tr("Place Similarities in \"Similar\" Visgroup"), this);
	m_pDifSimilairVisgroup->setChecked(true);

	auto pButtonBox = new QDialogButtonBox(Qt::Orientation::Horizontal, this);
	auto pOKButton = pButtonBox->addButton(QDialogButtonBox::Ok);
	auto pCloseButton = pButtonBox->addButton(QDialogButtonBox::Close);
	
	pDialogLayout->addWidget(pFindLabel,0,0,Qt::AlignLeft);
	pDialogLayout->addWidget(m_pFindName,0,0,Qt::AlignRight);
	pDialogLayout->addWidget(pBrowseButton,0,1,Qt::AlignRight);
	pDialogLayout->addWidget(pOptionLabel,1,0,Qt::AlignLeft);
	pDialogLayout->addWidget(m_pDifSimilairVisgroup,2,0,Qt::AlignLeft);
	pDialogLayout->addWidget(pButtonBox,3,0,Qt::AlignLeft);

	connect(pOKButton, &QPushButton::released, this, &CMapDiff::onOKPressed);
	connect(pCloseButton, &QPushButton::released, this, &CMapDiff::onClosePressed);
	connect(pBrowseButton, &QPushButton::released, this, &CMapDiff::onBrowsePressed);


	this->setLayout(pDialogLayout);
	this->setFixedSize(this->sizeHint());

};

void CMapDiff::onOKPressed(){
	this->close();
};
void CMapDiff::onBrowsePressed(){
	this->close();
};
void CMapDiff::onClosePressed(){
	this->close();
};