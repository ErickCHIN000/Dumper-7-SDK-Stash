#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x28C - 0x260)
// WidgetBlueprintGeneratedClass wid_Crafting_Resources_Small.wid_Crafting_Resources_Small_C
class UWid_Crafting_Resources_Small_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Resources_Small_C*                Needed;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_5;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        BottomOffset;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Crafting_Resources_Small_C* GetDefaultObj();

	void UpdateVisibility(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void EnumToString(enum class EResourceType Selection, class FName* Name, class FName CallFunc_GetNameByResource_ReturnValue);
	void Update(TMap<class FName, float>& Ingreadients, TMap<class FName, float> IngreadientsNoPerks);
	void AnimateNeeded();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Crafting_Resources_Small(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float Temp_float_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTime_Time, int32 Temp_int_Array_Index_Variable, TArray<enum class EResourceType>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class EResourceType CallFunc_Array_Get_Item, class FName CallFunc_EnumToString_Name, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Count_ReturnValue, TMap<class FName, float> K2Node_CustomEvent_Ingreadients, TMap<class FName, float> K2Node_CustomEvent_IngreadientsNoPerks, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, float CallFunc_Count_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_Count_ReturnValue_2, float K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Update_RequirementsMet, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


