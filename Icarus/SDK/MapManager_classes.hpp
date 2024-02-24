#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x358 - 0x2B0)
// BlueprintGeneratedClass MapManager.MapManager_C
class AMapManager_C : public AMapManagerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              OrthoCapture;                                      // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      OrthoCamera;                                       // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MapCameraLocationActor;                            // 0x2D0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XTileCount;                                        // 0x2D8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        YTileCount;                                        // 0x2DC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMapRow>                       TileRadarStates;                                   // 0x2E0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TArray<struct FIntVector>                    AdjacencyMatrix;                                   // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AResourceDeposit*>              RadarDetectedDeposits;                             // 0x300(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FIntVector>                    PlacedRadarLocations;                              // 0x310(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<int32>                                PlacedRadarRadius;                                 // 0x320(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FGlobalEquippableStats>        GlobalStats;                                       // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FRadarV2ScanData>              RadarV2Scans;                                      // 0x340(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	int32                                        RadarV2ScanCount;                                  // 0x350(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        RadarV3ScanCount;                                  // 0x354(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMapManager_C* GetDefaultObj();

	void FlushAllScans(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UIcarusMapScreenBase* CallFunc_GetMap_Radar, bool CallFunc_IsDedicatedServer_ReturnValue, class UUMG_RadarMainScreen_C* K2Node_DynamicCast_AsUMG_Radar_Main_Screen, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class ABP_Radarv3_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_Radarv3_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EMapTileRadarFlag Temp_byte_Variable, const struct FMapRow& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, enum class EMapTileRadarFlag CallFunc_Array_Get_Item_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void RestoreFromDatabase(TMap<struct FIntPoint, int32>& TileFlags, TArray<struct FRadarV3ScanData>& RadarScans, int32 LocalBitmask, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FIntPoint>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FIntPoint& CallFunc_Array_Get_Item, const struct FRadarV3ScanData& CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_IsValidTileCoord_Valid, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void SaveToDatabase(TMap<struct FIntPoint, int32>& TileFlags, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 Temp_int_Loop_Counter_Variable_1, const struct FMapRow& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EMapTileRadarFlag CallFunc_Array_Get_Item_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void SetColumnTilesFromBitmask();
	void OnRep_TileRadarStates(TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetMapTileForFOW(int32 X, int32 Y, bool* FoundUnscanned, int32* Unscanned_X, int32* Unscanned_Y, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValidTileCoord_Valid, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_RadarV3ScanCount(bool CallFunc_IsDedicatedServer_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UIcarusMapScreenBase* CallFunc_GetMap_Radar, class UUMG_RadarMainScreen_C* K2Node_DynamicCast_AsUMG_Radar_Main_Screen, bool K2Node_DynamicCast_bSuccess_1);
	void OnRep_RadarV2ScanCount(bool CallFunc_IsDedicatedServer_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UIcarusMapScreenBase* CallFunc_GetMap_Radar, class UUMG_RadarMainScreen_C* K2Node_DynamicCast_AsUMG_Radar_Main_Screen, bool K2Node_DynamicCast_bSuccess_1);
	void RadarV3ScanFinished(const struct FRadarV3ScanData& Scan, int32 Temp_int_Variable, const struct FRadarV3ScanData& K2Node_MakeStruct_RadarV3ScanData, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_RadarV2Scans(TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void RadarV2ScanFinished(const struct FVector& WorldLocation, float DistanceInKM, float Intensity, int32 Temp_int_Variable, const struct FRadarV2ScanData& K2Node_MakeStruct_RadarV2ScanData, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RemoveSingleGlobalStatFromActors(int32 StatIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, class AActor* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetRowIndex_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue);
	void RecheckActorsForSingleGlobalStat(int32 StatIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetRowIndex_ReturnValue, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void EquipableRemoveGlobalStat(class UBP_EquippableModifier_C* Equippable_Instance, bool Temp_bool_Variable, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FEquippableRowHandleFEquippableRowHandle_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EquipableApplyGlobalStat(class UBP_EquippableModifier_C* Equippable_Instance, bool Temp_bool_Variable, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UEquippableModifier*>& K2Node_MakeArray_Array, const struct FGlobalEquippableStats& K2Node_MakeStruct_GlobalEquippableStats, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FEquippableRowHandleFEquippableRowHandle_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Radar_Radius_Update(class ABP_Radar_C* Radar, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_WorldSpaceToTile_X, int32 CallFunc_WorldSpaceToTile_Y, int32 CallFunc_Array_Add_ReturnValue, const struct FIntVector& K2Node_MakeStruct_IntVector, const struct FIntVector& K2Node_MakeStruct_IntVector_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& CallFunc_RadarTileToWorld_TileCenterWorldSpace, bool CallFunc_Array_Contains_ReturnValue);
	void RadarTileToWorld(int32 X, int32 Y, struct FVector* TileCenterWorldSpace, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue);
	void LineSubsectionCheck(const struct FVectorPair& TestLine, const struct FVectorPair& CheckAgainstLine, enum class ELineSegmentRelationship* NewParam, const struct FVector2D& CheckAgainst1d, const struct FVector2D& Test1d, float CheckAgainstEnd, float CheckAgainstStart, float TestEnd, float TestStart, bool Xchanges, bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_5, float K2Node_Select_Default_2, float K2Node_Select_Default_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float K2Node_Select_Default_4, bool CallFunc_Less_FloatFloat_ReturnValue_6, float K2Node_Select_Default_5, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, bool CallFunc_Less_FloatFloat_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_8, float K2Node_Select_Default_6, float K2Node_Select_Default_7, float CallFunc_BreakVector_X_6, float CallFunc_BreakVector_Y_6, float CallFunc_BreakVector_Z_6, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X_7, float CallFunc_BreakVector_Y_7, float CallFunc_BreakVector_Z_7, float CallFunc_BreakVector_X_8, float CallFunc_BreakVector_Y_8, float CallFunc_BreakVector_Z_8, bool CallFunc_Less_FloatFloat_ReturnValue_9, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_10, float K2Node_Select_Default_8, float K2Node_Select_Default_9, float K2Node_Select_Default_10, float K2Node_Select_Default_11, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_BreakVector_X_9, float CallFunc_BreakVector_Y_9, float CallFunc_BreakVector_Z_9, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, float CallFunc_BreakVector_X_10, float CallFunc_BreakVector_Y_10, float CallFunc_BreakVector_Z_10, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	void GetTileAtGridspaceVector(const struct FVector& TileCoords, enum class EMapTileRadarFlag* Radar_Flag, bool* Failed, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1);
	void TryToGetUnscannedTileAtCoords(int32 X, int32 Y, bool* FoundUnscanned, int32* Unscanned_X, int32* Unscanned_Y, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValidTileCoord_Valid, bool K2Node_SwitchEnum_CmpSuccess);
	void CompleteTileScan(int32 X, int32 Y, class ABP_Radar_C* Radar, enum class EMapTileRadarFlag NewTile_, int32 Temp_int_Array_Index_Variable, const struct FModifier& K2Node_MakeStruct_Modifier, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, const struct FVector& CallFunc_RadarTileToWorld_TileCenterWorldSpace, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_MetaDeposit_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_OreDeposit_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsDepleted_Depleted, int32 CallFunc_WorldSpaceToTile_X, int32 CallFunc_WorldSpaceToTile_Y, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsValidTileCoord(int32 X, int32 Y, bool* Valid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void GetNearestUnscannedTileInRangeOf1(int32 X, int32 Y, int32* Unscanned_X, int32* Unscanned_Y, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FIntVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValidTileCoord_Valid, bool K2Node_SwitchEnum_CmpSuccess);
	void SetTileRadarFlag(int32 X, int32 Y, enum class EMapTileRadarFlag Flag);
	void InitMapTiles(const TArray<enum class EMapTileRadarFlag>& TempArray, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWorldDataRowHandle& CallFunc_GetWorldData_WorldData, bool CallFunc_GetWorldData_ReturnValue, TArray<enum class EMapTileRadarFlag>& K2Node_MakeArray_Array, const struct FWorldData& CallFunc_GetWorldDataStruct_WorldData, enum class EValid CallFunc_GetWorldDataStruct_Paths, enum class EMapTileRadarFlag Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, const struct FMapRow& K2Node_MakeStruct_MapRow, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void UserConstructionScript(const struct FIntVector& K2Node_MakeStruct_IntVector, const struct FIntVector& K2Node_MakeStruct_IntVector_1, const struct FIntVector& K2Node_MakeStruct_IntVector_2, const struct FIntVector& K2Node_MakeStruct_IntVector_3, const struct FIntVector& K2Node_MakeStruct_IntVector_4, const struct FIntVector& K2Node_MakeStruct_IntVector_5, const struct FIntVector& K2Node_MakeStruct_IntVector_6, const struct FIntVector& K2Node_MakeStruct_IntVector_7, const struct FIntVector& K2Node_MakeStruct_IntVector_8, TArray<struct FIntVector>& K2Node_MakeArray_Array);
	void ReceiveBeginPlay();
	void ClientUpdateRadarMapTile(int32 X, int32 Y, enum class EMapTileRadarFlag Flag, const struct FVector& WorldPosition, class ABP_Radar_C* Radar);
	void ClientUpdateRadarRadius(int32 X, int32 Y, int32 Radius, const struct FVector& TileWorldSpace, class ABP_Radar_C* Radar);
	void ReceiveTick(float DeltaSeconds);
	void ServerOnlyUpdate();
	void Multi_RunFlushAllScans();
	void ExecuteUbergraph_MapManager(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_x_1, int32 K2Node_CustomEvent_Y_1, enum class EMapTileRadarFlag K2Node_CustomEvent_Flag, const struct FVector& K2Node_CustomEvent_worldPosition, class ABP_Radar_C* K2Node_CustomEvent_radar_1, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_CustomEvent_x, int32 K2Node_CustomEvent_Y, int32 K2Node_CustomEvent_Radius, const struct FVector& K2Node_CustomEvent_TileWorldSpace, class ABP_Radar_C* K2Node_CustomEvent_radar, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, float K2Node_Event_DeltaSeconds, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class UUMG_RadarMainScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, int32 Temp_int_Loop_Counter_Variable, class UUMG_RadarMainScreen_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_2);
};

}

