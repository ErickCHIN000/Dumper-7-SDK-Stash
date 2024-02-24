#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass wid_IInventoryApp.wid_IInventoryApp_C
class IWid_IInventoryApp_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWid_IInventoryApp_C* GetDefaultObj();

	void FaceUpReleased();
	void Back();
	void Assign();
	void QuickUse8();
	void QuickUse7();
	void QuickUse6();
	void QuickUse5();
	void ReleaseButton();
	void SelectItem(const struct FVector2D& Idx);
	void QuickUse4();
	void QuickUse3();
	void QuickUse2();
	void QuickUse1();
	void RightStick();
	void R2();
	void L2();
	void FaceLeft();
	void FaceDown();
	void FaceRight();
	void FaceUp();
	void DPadRight();
	void DPadLeft();
	void DPadDown();
	void DPadUp();
	void Up();
	void Left();
	void Down();
	void Right();
	void End();
	void Start();
};

}


