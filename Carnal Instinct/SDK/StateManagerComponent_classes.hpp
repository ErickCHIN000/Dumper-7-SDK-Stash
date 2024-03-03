#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x128 - 0xB0)
// BlueprintGeneratedClass StateManagerComponent.StateManagerComponent_C
class UStateManagerComponent_C : public UActorComponent
{
public:
	enum class E_State                           CurrentState;                                      // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_263E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<enum class E_Activity, bool>            Activities;                                        // 0xC8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnActivityChanged;                                 // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UStateManagerComponent_C* GetDefaultObj();

	void SetIdleState();
	void ResetState(float InTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GetActivityValue(enum class E_Activity Activity, bool* Value, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetActivity(enum class E_Activity Activity, bool Value, bool CallFunc_GetActivityValue_Value, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void GetState(enum class E_State* State);
	void SetState(enum class E_State State, enum class E_State L_PrevState, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OnActivityChanged__DelegateSignature(enum class E_Activity Activity, bool Value);
	void OnStateChanged__DelegateSignature(enum class E_State PrevState, enum class E_State NewState);
};

}


