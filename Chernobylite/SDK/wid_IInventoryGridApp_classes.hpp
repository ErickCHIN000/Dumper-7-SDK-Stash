#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass wid_IInventoryGridApp.wid_IInventoryGridApp_C
class IWid_IInventoryGridApp_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWid_IInventoryGridApp_C* GetDefaultObj();

	void FaceUpReleased();
	void ReleaseButton();
	void SelectItem(const struct FVector2D& Idx);
	void RightStick();
	void R2();
	void L2();
	void FaceLeft();
	void FaceDown();
	void FaceRight();
	void FaceUp();
	void End();
	void Start();
	void Left();
	void Down();
	void Right();
	void Up();
};

}


