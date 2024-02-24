#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Map.BPFL_Map_C
class UBPFL_Map_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Map_C* GetDefaultObj();

	void GetShowWaypointInWorldFromType(const struct FDataTableRowHandle& WaypointType, class UObject* __WorldContext, bool* ShowInWorld, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetMapLocationManager(class AGameModeBase* GameMode, class UObject* __WorldContext, class ABP_MapLocationManager_C** MapLocationManager, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, class ABP_MapLocationManager_C* CallFunc_GetManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BreakUIMapTable(struct FS_UI_MapTable& S_UI_MapTable, class UObject* __WorldContext, class FText* Map_Level_Name, class FText* Level_Description, TSoftObjectPtr<class UTexture2D>* Map_Texture, enum class E_MapRotation* Map_Rotation_Override, double* Maximum_Realm_Height);
	void Get_Distance_Text_From_Waypoint(const struct FDataTableRowHandle& Waypoint_Type, class UObject* __WorldContext, double* DistanceTo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LevelWaypoints& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_WaypointInformation& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void Initialize_Discovery_Component_Sphere_Overlap(class UBP_MapExplorationComponent_C* Discovery_Component, class USphereComponent* Sphere_Collision, class UObject* __WorldContext, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Initialize_Sphere_Overlap_Radius_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast);
	void Make_DiscoveryInformation(const struct FGuid& ID, enum class EFDiscoveryLocationState Discovery_Location_State, class UObject* __WorldContext, struct FDiscoveryInformation* Discovery_Information, const struct FDiscoveryInformation& K2Node_MakeStruct_DiscoveryInformation);
	void Break_DiscoveryInformation(const struct FDiscoveryInformation& Discovery_Information, class UObject* __WorldContext, struct FGuid* ID, enum class EFDiscoveryLocationState* Discovery_Location_State);
	void Make_LevelDiscoveryLocation(const class FString& Level_Name, TArray<struct FDiscoveryInformation>& Discovery_Location_Information, class UObject* __WorldContext, struct FLevelDiscoveryLocation* Level_Discovery_Location_, const struct FLevelDiscoveryLocation& K2Node_MakeStruct_LevelDiscoveryLocation);
	void Break_LevelDiscoveryLocation(const struct FLevelDiscoveryLocation& Level_Discovery_Location_, class UObject* __WorldContext, class FString* Level_Name, TArray<struct FDiscoveryInformation>* Discovery_Location_Information);
	void Make_DiscoveryLocation(const struct FGuid& ID, class UObject* __WorldContext, struct FDiscoveryLocation* DIscovery_Location, const struct FDiscoveryLocation& K2Node_MakeStruct_DiscoveryLocation);
	void Break_DiscoveryLocation(const struct FDiscoveryLocation& DIscovery_Location, class UObject* __WorldContext, struct FGuid* ID);
	void Make_FastTravelInformation(const struct FGuid& ID, enum class E_FastTravelLocationState Fast_Travel_Location_State, class UObject* __WorldContext, struct FS_FastTravelInformation* S_FastTravelInformation, const struct FS_FastTravelInformation& K2Node_MakeStruct_S_FastTravelInformation);
	void Break_FastTravelInformation(struct FS_FastTravelInformation& S_FastTravelInformation, class UObject* __WorldContext, struct FGuid* ID, enum class E_FastTravelLocationState* Fast_Travel_Location_State);
	void MakeLevelFastTravelLocation(const class FString& Level_Name, TArray<struct FS_FastTravelInformation>& Fast_Travel_Information, class UObject* __WorldContext, struct FS_LevelFastTravelLocation* S_LevelFastTravelLocation, const struct FS_LevelFastTravelLocation& K2Node_MakeStruct_S_LevelFastTravelLocation);
	void Break_LevelFastTravelLocation(struct FS_LevelFastTravelLocation& S_LevelFastTravelLocation, class UObject* __WorldContext, class FString* Level_Name, TArray<struct FS_FastTravelInformation>* Fast_Travel_Information);
	void Make_FastTravelLocation(const struct FGuid& ID, const struct FVector& World_Location, const struct FRotator& Rotation, class FText Location_Name, const struct FDataTableRowHandle& Fast_Travel_Type, enum class E_FastTravelLocationState Initial_Fast_Travel_Location_State, class UObject* __WorldContext, struct FS_FastTravelLocation* Fast_Travel_Location, const struct FDiscoveryLocation& NewLocalVar_0, const struct FS_FastTravelLocation& K2Node_MakeStruct_S_FastTravelLocation);
	void Break_FastTravelLocation(const struct FS_FastTravelLocation& Fast_Travel_Location, class UObject* __WorldContext, struct FGuid* ID, struct FVector* World_Location, struct FRotator* Rotation, class FText* Location_Name, struct FDataTableRowHandle* Fast_Travel_Type, enum class E_FastTravelLocationState* Initial_Fast_Travel_Location_State);
};

}


