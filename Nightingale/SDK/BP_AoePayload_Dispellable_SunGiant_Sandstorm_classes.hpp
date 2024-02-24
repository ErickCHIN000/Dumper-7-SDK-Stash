#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x748 - 0x708)
// BlueprintGeneratedClass BP_AoePayload_Dispellable_SunGiant_Sandstorm.BP_AoePayload_Dispellable_SunGiant_Sandstorm_C
class ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C : public ABP_AoePayload_Dispellable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x708(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAk4;                                         // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAk3;                                         // 0x720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAk2;                                         // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAk1;                                         // 0x730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HelicopterAxis;                                    // 0x738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    StormScopedAk;                                     // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C* GetDefaultObj();

	void StopOneShotAudio(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3);
	void PlayOneShotAudio(bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue_2, bool CallFunc_PostAkEventScoped_ReturnValue_3);
	void HandleFadeOut();
	void HandleFadeIn();
	void ReceiveBeginPlay();
	void CustomEvent();
	void ExecuteUbergraph_BP_AoePayload_Dispellable_SunGiant_Sandstorm(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ Temp_delegate_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_2);
};

}


