#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3D0 - 0x3A8)
// BlueprintGeneratedClass PlayerDeathContainer.PlayerDeathContainer_C
class APlayerDeathContainer_C : public AGenericDeathContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                   DataTableNavPanel;                                 // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                Namespace;                                         // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APlayerDeathContainer_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_PlayerDeathContainer(int32 EntryPoint, TArray<class AMapManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AMapManager_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FMapDeathContainerInfo& K2Node_MakeStruct_MapDeathContainerInfo, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TArray<class AMapManager_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class AMapManager_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


