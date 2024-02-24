#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3A0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C
class UWBP_sw_ItemTooltip_AddressCard_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Biome;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_RespitePlayers;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Biome_Name;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_RealmPowerLevel_Value;                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_RespiteOwners_List;                            // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInstanceData_AddressCard             AddressData;                                       // 0x370(0x30)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_sw_ItemTooltip_AddressCard_C* GetDefaultObj();

	void SetupRealmPowerLevel(class FText AllRealmTags, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetupBiomeName(class UBiomeUIDataRegistry* BiomeUIData, uint8 CallFunc_GetValidValue_ReturnValue, const struct FBiomeUIData& CallFunc_TryGetBiomeUIData_OutData, enum class EGetResult CallFunc_TryGetBiomeUIData_OutBranches, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void SetupRespitePlayerNames(bool CallFunc_Array_IsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRespitePlayerNamesRetrieved(const struct FProfileNamesMapWrapper& Wrapper, const struct FOnlineServiceStatus& ServiceStatus, class FText CombinedPlayerNames, bool CallFunc_IsSuccess_bIsSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, const struct FUniqueName& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPublicNameWithoutDiscriminator_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetupText();
	void Construct();
	void ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard(int32 EntryPoint);
};

}


