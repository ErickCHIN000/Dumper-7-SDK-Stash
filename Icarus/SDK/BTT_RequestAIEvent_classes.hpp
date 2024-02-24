#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0xC1 - 0xA8)
// BlueprintGeneratedClass BTT_RequestAIEvent.BTT_RequestAIEvent_C
class UBTT_RequestAIEvent_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAIEventsEnum                         EventToRequest;                                    // 0xB0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         MustSucceed;                                       // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTT_RequestAIEvent_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_RequestAIEvent(int32 EntryPoint, class UAICoordinatorSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, enum class EAIEventRequestResponse CallFunc_RequestAIEvent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


