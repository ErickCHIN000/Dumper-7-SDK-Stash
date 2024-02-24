#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x838 - 0x810)
// BlueprintGeneratedClass BP_CineCamera.BP_CineCamera_C
class ABP_CineCamera_C : public ACharacterCustomizerCamera
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x810(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1542[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AActor>>         ActorsToCapture;                                   // 0x828(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_CineCamera_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CineCamera(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, float K2Node_Event_DeltaSeconds, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable_1, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABP_LostSpirit_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_LostSpirit_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


