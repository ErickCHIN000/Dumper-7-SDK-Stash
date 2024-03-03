#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass W_CompassStyle_11.W_CompassStyle_11_C
class UW_CompassStyle_11_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            LocationName;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CompassMaster_C*                    W_CompassMaster_1;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Sabu;                                              // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_CompassStyle_11_C* GetDefaultObj();

	void Set_Location_Text(const class FString& New_Text);
	void Reset_Location_Text();
	void ExecuteUbergraph_W_CompassStyle_11(int32 EntryPoint, const class FString& K2Node_CustomEvent_New_Text, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


