#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x63 (0x375 - 0x312)
// BlueprintGeneratedClass BP_AreaBlocker.BP_AreaBlocker_C
class ABP_AreaBlocker_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2E5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box_Collision;                                     // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Wall;                                           // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_DissolveWall_Alpha_60A862A74A8279998B1F2EADB42B859B; // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_DissolveWall__Direction_60A862A74A8279998B1F2EADB42B859B; // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E6A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_DissolveWall;                             // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysLocked;                                      // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsReturnPath;                                      // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_StormModeArea                Area;                                              // 0x34A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E78[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x34C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class ATriggerBox>>    BoxTriggers;                                       // 0x360(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        TarCost;                                           // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ProgressIncremented;                               // 0x374(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_AreaBlocker_C* GetDefaultObj();

	void GetRuneID(class FName* ID, enum class Enum_StormModeArea Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName K2Node_Select_Default);
	void AddOpenAreaTokenRune(class FName CallFunc_GetRuneID_ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess);
	void OnActorUsed(class APlayerController* Controller, bool* Success, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool GetProgress(enum class Enum_StormModeProgress Progress, enum class Enum_StormModeProgress FirstArea, enum class Enum_StormModeProgress SecondArea, enum class Enum_StormModeProgress ThirdArea, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void IncreaseStormModeProgress_AreaStart(enum class Enum_StormModeArea Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, class FName K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5, bool K2Node_DynamicCast_bSuccess_5, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void LevelBlockerCollisionAndVisibility(enum class ECollisionResponse NewResponse, bool bNewVisibility);
	void LevelTransitionCollision(bool Collision, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class ATriggerBox> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ATriggerBox* K2Node_DynamicCast_AsTrigger_Box, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
	void Timeline_DissolveWall__FinishedFunc();
	void Timeline_DissolveWall__UpdateFunc();
	void BndEvt__Box_Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void CloseReturnPathBlocker();
	void Handle_ReturnPath();
	void OpenBlocker(enum class Enum_StormModeArea AreaToOpen);
	void OnFogWallUsed();
	void ReceiveBeginPlay();
	void AreaBlocker_MakeInteractable();
	void ExecuteUbergraph_BP_AreaBlocker(int32 EntryPoint, class FName Temp_name_Variable, float CallFunc_Lerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_GetProgress_ReturnValue, bool CallFunc_GetProgress_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_StormModeArea K2Node_CustomEvent_AreaToOpen, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_4, enum class Enum_StormModeAreaState CallFunc_GetStormModeAreaState_CurrentState, bool K2Node_SwitchEnum_CmpSuccess);
};

}


