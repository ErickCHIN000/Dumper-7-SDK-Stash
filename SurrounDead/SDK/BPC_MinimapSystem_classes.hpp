#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC9 (0x169 - 0xA0)
// BlueprintGeneratedClass BPC_MinimapSystem.BPC_MinimapSystem_C
class UBPC_MinimapSystem_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerMarker_C*                    PlayerMarker;                                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_Ingame_C*                          In_Game_UI;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMapUI_C*                              MapUI;                                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         MapToggled;                                        // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_MarkerData>                 Markers;                                           // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_MarkerData                         MarkerData;                                        // 0xD8(0x89)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_44AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Map_UI_Loaded_;                                    // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPC_MinimapSystem_C* GetDefaultObj();

	void Remove_Quest_Marker(class UW_QuestMarker_C* Marker, class ABP_QuestMarker_C* Actor, bool CallFunc_IsValid_ReturnValue);
	void SetMapVisibility(enum class ESlateVisibility Visibility, bool K2Node_SwitchEnum_CmpSuccess);
	void Add_Saved_Player_Marker(const struct FS_MarkerData& Marker_Data, class ABP_PlayerMarker_C* Target_Actor, int32 Index, TArray<class UW_PlayerMarker_C*>* Markers, class UW_PlayerMarker_C* L_Marker, const TArray<class UW_PlayerMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_PlayerMarker_C* CallFunc_Add_Player_Marker_Return);
	void Remove_Player_Marker(class UW_PlayerMarker_C* Marker, int32 Index, class ABP_PlayerMarker_C* Actor, bool CallFunc_IsValid_ReturnValue);
	void Add_Player_Marker(const struct FS_MarkerData& Marker_Data, class ABP_PlayerMarker_C* Target_Actor, TArray<class UW_PlayerMarker_C*>* Markers, class UW_PlayerMarker_C* L_Marker, const TArray<class UW_PlayerMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UW_PlayerMarker_C* CallFunc_Add_Player_Marker_Return, bool CallFunc_IsValid_ReturnValue_1);
	void Add_Quest_Marker(const struct FS_MarkerData& Marker_Data, class ABP_QuestMarker_C* Target_Actor, TArray<class UW_QuestMarker_C*>* Markers, class UW_QuestMarker_C* L_Marker, const TArray<class UW_QuestMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class E_MarkerType CallFunc_Array_Get_Item, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UW_QuestMarker_C* CallFunc_Add_Quest_Marker_Return);
	void Remove_POI_Marker(class UW_POIMarker_C* Marker, bool CallFunc_IsValid_ReturnValue);
	void Marker_Location(const struct FVector2D& Map_Location, struct FVector* ImpactPoint, bool* Success, TArray<class AActor*>& Temp_object_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void Add_POI_Marker(const struct FS_MarkerData& Marker_Data, class AActor* Target_Actor, TArray<class UW_POIMarker_C*>* Markers, class UW_POIMarker_C* L_Marker, const TArray<class UW_POIMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class E_MarkerType CallFunc_Array_Get_Item, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UW_POIMarker_C* CallFunc_Add_POI_Marker_Return);
	void ReceiveBeginPlay();
	void Toggle_Bigmap();
	void SERVER_Spawn_Player_Marker(const struct FVector& Hit_Location, bool Success);
	void Zoom_Map(double Val);
	void Event_ConstructMap();
	void Create_Checkpoint_Marker(const struct FVector2D& Map_Location);
	void ExecuteUbergraph_BPC_MinimapSystem(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_Hit_Location, bool K2Node_CustomEvent_Success, bool CallFunc_IsLocalController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerMarker_C* CallFunc_FinishSpawningActor_ReturnValue, double K2Node_CustomEvent_Val, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Map_Location, class ABP_MapData_C* CallFunc_GetActorOfClass_ReturnValue, const struct FVector& CallFunc_Marker_Location_ImpactPoint, bool CallFunc_Marker_Location_Success, bool CallFunc_IsValid_ReturnValue_2, class UMapUI_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
};

}


