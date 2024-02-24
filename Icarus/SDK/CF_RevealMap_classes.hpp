#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2F8 - 0x2F0)
// WidgetBlueprintGeneratedClass CF_RevealMap.CF_RevealMap_C
class UCF_RevealMap_C : public UCF_BaseButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_RevealMap_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_RevealMap(int32 EntryPoint, TArray<class UUMG_RadarMainScreenBase_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_RadarMainScreenBase_C* CallFunc_Array_Get_Item);
};

}


