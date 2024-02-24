#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass ArsenalRaderHUDComponent.ArsenalRaderHUDComponent_C
class UArsenalRaderHUDComponent_C : public UTTLArsenalRaderHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArsenalRaderHUDComponent_C* GetDefaultObj();

	void IsExistRaderTarget(class AActor* TargetActor, bool* IsExist, int32 CallFunc_FindRaderInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void AddTo3DDirection(class UClass* Class, class AActor* TargetActor, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AArsenalDirectionMarker_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTTLRader3DInfo& K2Node_MakeStruct_TTLRader3DInfo, int32 CallFunc_Array_Add_ReturnValue);
	void AddToDirectionBPMain(class AActor* Actor, bool CheckLocallyAndPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FindRader3DInfo_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsLocallyControlledPlayer_ReturnValue);
	void RemoveWidgetFromHUDMission(class UUserWidget* Widget);
	void AddWidgetToHUDMissionBP(class UUserWidget* UserWidget);
	void AddHighlightBP(class AActor* TargetActor, bool CheckLocallyAndPlayer);
	void ExecuteUbergraph_ArsenalRaderHUDComponent(int32 EntryPoint, class AActor* K2Node_Event_targetActor, bool K2Node_Event_checkLocallyAndPlayer, class UUserWidget* K2Node_Event_Widget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess, class AHUD* CallFunc_GetHUD_ReturnValue1, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission1, bool K2Node_DynamicCast_bSuccess1, class UUserWidget* K2Node_Event_userWidget, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


