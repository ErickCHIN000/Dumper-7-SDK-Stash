#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C
class UWid_BuildSystem_Resources_ItemReq_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PowerInfo;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RequiredPower;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_Resources_ItemReq_C* GetDefaultObj();

	void FetchPowerData(const struct FBuildEntryInternal& EntityInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_PowerManagmentCanAdd_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue);
	void ConvertResourceToItemEnum(enum class EResourceType Res, enum class Enum_ItemNames* NewParam, bool K2Node_SwitchEnum_CmpSuccess);
	void Update(class FName ItemId, enum class EResourceType CurrentResourceType, const struct FBuildEntryInternal& EntityInfo, const TArray<struct FSt_ItemByEnumAndCount>& ResourcesCost, int32 Temp_int_Array_Index_Variable, enum class Enum_ItemNames CallFunc_ConvertResourceToItemEnum_NewParam, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FBuildEntryInternal& CallFunc_BuildSystemGetEntityInfo_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_SelectFloat_ReturnValue, TArray<enum class EResourceType>& K2Node_MakeArray_Array, const struct FSt_ItemByEnumAndCount& K2Node_MakeStruct_st_ItemByEnumAndCount, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq(int32 EntryPoint);
};

}


