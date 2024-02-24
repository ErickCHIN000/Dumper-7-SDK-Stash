#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x338 - 0x2A0)
// BlueprintGeneratedClass BP_POIMapMarker.BP_POIMapMarker_C
class ABP_POIMapMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelAwareComponent*                  LevelAware;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDiscoverableRadiusComponent*          DiscoverableRadius;                                // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMapPinComponent*                      MapPin;                                            // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, int32>             FootprintRadiusToDiscoverableRadius;               // 0x2C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x318(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_POIMapMarker_C* GetDefaultObj();

	void GetDiscoverableRadius(bool* IsDiscoverable, int32* Radius, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void BndEvt__BP_POIMapMarker_DiscoverableRadius_K2Node_ComponentBoundEvent_0_DiscoveredByPlayerDynamicDelegate__DelegateSignature(class APlayerState* PlayerState);
	void BndEvt__BP_POIMapMarker_LevelAware_K2Node_ComponentBoundEvent_1_OnLevelStreamingCompleteSignature__DelegateSignature();
	void ExecuteUbergraph_BP_POIMapMarker(int32 EntryPoint, const struct FMapPinData& CallFunc_GetMapPinData_ReturnValue, class AStreamingLevelProxyActor* CallFunc_GetLevelProxy_ReturnValue, TScriptInterface<class IBPI_HasTagContainer_C> K2Node_DynamicCast_AsBPI_Has_Tag_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTagContainer_GameplayTagContainer, bool CallFunc_GetDiscoverableRadius_IsDiscoverable, int32 CallFunc_GetDiscoverableRadius_Radius, class APlayerState* K2Node_ComponentBoundEvent_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ILocationTrackerInterface> CallFunc_Server_AddMapPinData_self_CastInput, bool CallFunc_HasAuthority_ReturnValue);
};

}


