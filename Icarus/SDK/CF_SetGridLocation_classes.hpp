#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// WidgetBlueprintGeneratedClass CF_SetGridLocation.CF_SetGridLocation_C
class UCF_SetGridLocation_C : public UCF_BaseGrid_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetGridLocation_C* GetDefaultObj();

	void Teleport(const struct FVector& NewWorldLocation, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess);
	void GetTeleportLocation(const struct FVector& GridLocation, struct FVector* Location, const struct FVector& Start, const TArray<class AActor*>& Ignore, const struct FVector& CallFunc_GetSurfaceHeightAtLocation_Location, bool CallFunc_GetSurfaceHeightAtLocation_Success);
	void GetValidProspectStarts(TArray<struct FProspectListRowHandle>* ProspectRowHandles, const TArray<struct FProspectListRowHandle>& ValidProspects, class FName CurrentLevelName, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FProspectListEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FProspectListRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_NumRows_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Handle_Execute(const class FString& Grid, float UV_x, float UV_y);
	void ExecuteUbergraph_CF_SetGridLocation(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsTerrainAnchorValid_ReturnValue, const class FString& K2Node_Event_Grid, float K2Node_Event_UV_x, float K2Node_Event_UV_y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GridToLocation_Location, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, const struct FVector& CallFunc_GetTeleportLocation_Location, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller_1, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue_1);
};

}


