#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x289 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C
class UWid_CompanionIndicator_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_80;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ECompanionIndicatorType           Type;                                              // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_CompanionIndicator_Entry_C* GetDefaultObj();

	void GetIndicatorInfoFromDatatable(enum class ECompanionIndicatorType Type, struct FCompanionIndicatorTypeInfo* IndicatorInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCompanionIndicatorTypeInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateType(enum class ECompanionIndicatorType Type, const struct FCompanionIndicatorTypeInfo& CallFunc_GetIndicatorInfoFromDatatable_IndicatorInfo, class FText CallFunc_TextToUpper_ReturnValue);
	void IsValidIndicator(bool* IsValid, bool CallFunc_IsValid_ReturnValue);
	void GetIndicatorLocation(struct FVector* Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void Construct();
	void ExecuteUbergraph_wid_CompanionIndicator_Entry(int32 EntryPoint);
};

}


