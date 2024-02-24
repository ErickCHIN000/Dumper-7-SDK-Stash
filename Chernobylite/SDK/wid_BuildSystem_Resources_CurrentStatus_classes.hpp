#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_Resources_CurrentStatus.wid_BuildSystem_Resources_CurrentStatus_C
class UWid_BuildSystem_Resources_CurrentStatus_C : public UUserWidget
{
public:
	class UTextBlock*                            PowerOuput;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  BuildID;                                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_Resources_CurrentStatus_C* GetDefaultObj();

	void FetchPowerData(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_PowerManagmentGetLimit_ReturnValue, int32 CallFunc_PowerManagmentGetCurrentUsage_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ConvertResourceToItemName(enum class EResourceType Type, class FName* ItemId, class FName CallFunc_GetNameByResource_ReturnValue);
	float TotalCountOfResource(enum class EResourceType Type, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_ConvertResourceToItemName_ItemID, float CallFunc_Count_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_Count_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
	void ConvertResourceToItemEnum(enum class EResourceType Res, enum class Enum_ItemNames* NewParam, bool K2Node_SwitchEnum_CmpSuccess);
	void Update(enum class EResourceType CurrentResourceType, const TArray<struct FSt_ItemByEnumAndCount>& ResourcesCost, int32 Temp_int_Array_Index_Variable, float CallFunc_TotalCountOfResource_ReturnValue, enum class Enum_ItemNames CallFunc_ConvertResourceToItemEnum_NewParam, const struct FSt_ItemByEnumAndCount& K2Node_MakeStruct_st_ItemByEnumAndCount, TArray<enum class EResourceType>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


