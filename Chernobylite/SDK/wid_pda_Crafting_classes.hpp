#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B8 - 0x2A0)
// WidgetBlueprintGeneratedClass wid_pda_Crafting.wid_pda_Crafting_C
class UWid_pda_Crafting_C : public UWid_pda_IFullScreen_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_sw_CraftingApp_02_C*              Wid_sw_CraftingApp_02;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_WaterMark_C*                      Wid_WaterMark;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_pda_Crafting_C* GetDefaultObj();

	void InputLeft();
	void InputUp();
	void InputDown();
	void InputFaceDown();
	void InputFaceRight();
	void InputFaceLeft();
	void InputFaceUp();
	void AppClosed();
	void AppOpened();
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void InputRight();
	void InputFaceDownReleased();
	void InputZoomUp();
	void InputZoomDown();
	void ExecuteUbergraph_wid_pda_Crafting(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_CloseInventory_ReturnValue);
};

}


