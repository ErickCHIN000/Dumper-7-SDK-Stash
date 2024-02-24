#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass wid_IWorkshopUIApp.wid_IWorkshopUIApp_C
class IWid_IWorkshopUIApp_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWid_IWorkshopUIApp_C* GetDefaultObj();

	void KeyboardMenu();
	void AnyKey();
	void AlternativeAttack();
	void LeftRight(float Axis);
	void UpDown(float Axis);
	void Show(bool Show);
	void MoveOut();
	void Back();
	void Toggle2();
	void Toggle1();
	void Accept();
	void Left();
	void Down();
	void Right();
	void Up();
	void End();
	void Start();
};

}


