#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x378 - 0x340)
// WidgetBlueprintGeneratedClass WBP_InputKeyIconSet.WBP_InputKeyIconSet_C
class UWBP_InputKeyIconSet_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        IconBox;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputKeyIcon_C*                   InputKeyIcon;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FKey>                          Keys;                                              // 0x358(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                             Size;                                              // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InputKeyIconSet_C* GetDefaultObj();

	void Update(const struct FKey& CurrentKey, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_InputKeyIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UWBP_InputKey_AND_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FKey& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnUsingGamepadChanged(bool bUsingGamepad);
	void OnInitialized();
	void ExecuteUbergraph_WBP_InputKeyIconSet(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bUsingGamepad);
};

}


