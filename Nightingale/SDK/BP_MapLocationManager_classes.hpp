#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x310 - 0x2C0)
// BlueprintGeneratedClass BP_MapLocationManager.BP_MapLocationManager_C
class ABP_MapLocationManager_C : public AMapLocationManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_FastTravelLocation>         Fast_Travel_Locations;                             // 0x2D0(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, RepNotify, AdvancedDisplay)
	FMulticastInlineDelegateProperty_            OnFastTravelLocationsUpdatedDelegate;              // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable)
	TArray<struct FDiscoveryLocation>            Discovery_Locations;                               // 0x2F0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	FMulticastInlineDelegateProperty_            OnDiscoveryLocationsUpdatedDelegate;               // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_MapLocationManager_C* GetDefaultObj();

	void Find_Discovery_Location_Index(struct FGuid& Discovery_Location_ID, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDiscoveryLocation& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGuid& CallFunc_Break_DiscoveryLocation_ID, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void Get_Discovery_Locations(TArray<struct FDiscoveryLocation>* Discovery_Locations);
	void Get_Discovery_Location(const struct FGuid& Discovery_Location_ID, struct FDiscoveryLocation* DIscovery_Location, int32 CallFunc_Find_Discovery_Location_Index_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnRep_Discovery_Locations();
	void On_Discovery_Locations_Updated();
	void Remove_Discovery_Location(const struct FGuid& Discovery_Location_ID, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Find_Discovery_Location_Index_Index, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Add_Discovery_Location(const struct FDiscoveryLocation& DIscovery_Location, bool CallFunc_IsServer_ReturnValue, const struct FGuid& CallFunc_Break_DiscoveryLocation_ID, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnRep_Fast_Travel_Locations();
	void Find_Fast_Travel_Location_Index(struct FGuid& Fast_Travel_Location_ID, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void Get_Fast_Travel_Locations(TArray<struct FS_FastTravelLocation>* Fast_Travel_Locations);
	void Get_Fast_Travel_Location(const struct FGuid& Fast_Travel_Location_ID, struct FS_FastTravelLocation* Fast_Travel_Location, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void On_Fast_Travel_Locations_Updated();
	void Remove_Fast_Travel_Location(const struct FGuid& Fast_Travel_Location_ID, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Update_Fast_Travel_Location_Name(const struct FGuid& Location_ID, class FText New_Location_Name, const struct FS_FastTravelLocation& LocationToUpdate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, bool CallFunc_IsServer_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Make_FastTravelLocation_Fast_Travel_Location, int32 CallFunc_Array_Length_ReturnValue, const struct FS_FastTravelLocation& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGuid& CallFunc_Break_FastTravelLocation_ID_1, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location_1, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation_1, class FText CallFunc_Break_FastTravelLocation_Location_Name_1, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void Add_Fast_Travel_Location(const struct FS_FastTravelLocation& Fast_Travel_Location, bool NewLocalVar_0, const struct FGuid& CallFunc_Break_FastTravelLocation_ID, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation, class FText CallFunc_Break_FastTravelLocation_Location_Name, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State, const struct FGuid& CallFunc_Break_FastTravelLocation_ID_1, const struct FVector& CallFunc_Break_FastTravelLocation_World_Location_1, const struct FRotator& CallFunc_Break_FastTravelLocation_Rotation_1, class FText CallFunc_Break_FastTravelLocation_Location_Name_1, const struct FDataTableRowHandle& CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1, enum class E_FastTravelLocationState CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue_2, int32 CallFunc_Find_Fast_Travel_Location_Index_Index, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void AddFastTravelLocationRPC(const struct FS_FastTravelLocation& Fast_Travel_Location);
	void RemoveFastTravelLocationRPC(const struct FGuid& Fast_Travel_Location_ID);
	void AddDiscoveryLocationRPC(const struct FDiscoveryLocation& DIscovery_Location);
	void RemoveDiscoveryLocationRPC(const struct FGuid& Discovery_Location_ID);
	void UpdateFastTravelLocationRPC(const struct FGuid& Location_ID, class FText New_Location_Name);
	void ExecuteUbergraph_BP_MapLocationManager(int32 EntryPoint, const struct FGuid& K2Node_CustomEvent_Location_ID, class FText K2Node_CustomEvent_New_Location_Name, const struct FS_FastTravelLocation& K2Node_CustomEvent_Fast_Travel_Location, const struct FGuid& K2Node_CustomEvent_Fast_Travel_Location_ID, const struct FDiscoveryLocation& K2Node_CustomEvent_Discovery_Location, const struct FGuid& K2Node_CustomEvent_Discovery_Location_ID);
	void OnDiscoveryLocationsUpdatedDelegate__DelegateSignature(TArray<struct FDiscoveryLocation>& Discovery_Locations);
	void OnFastTravelLocationsUpdatedDelegate__DelegateSignature(TArray<struct FS_FastTravelLocation>& Fast_Travel_Locations);
};

}


