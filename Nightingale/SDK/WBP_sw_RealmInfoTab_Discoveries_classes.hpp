#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x358 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_RealmInfoTab_Discoveries.WBP_sw_RealmInfoTab_Discoveries_C
class UWBP_sw_RealmInfoTab_Discoveries_C : public UNWXUserWidget
{
public:
	class UWBP_sw_RealmInfo_BoxedImagesHolder_C* EssenceImgHolder;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmDiscoveryCluster_C*       RealmDiscovery;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmInfo_BoxedImagesHolder_C* ResourceImgHolder;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_RealmInfoTab_Discoveries_C* GetDefaultObj();

	void UpdateRealmDiscovery(const struct FRealmSettings& Realm_Settings, TArray<struct FNWXClusterCollectionPresentationData>& CallFunc_GenerateRealmRewardPresentation_ClusterCollectionsPresentationDataList, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void UpdateEssenceImageHolder(TArray<struct FInventoryEntry>& Essence_Rewards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue);
};

}


