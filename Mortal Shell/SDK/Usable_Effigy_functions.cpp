#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Effigy.Usable_Effigy_C
// (Actor)

class UClass* AUsable_Effigy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Effigy_C");

	return Clss;
}


// Usable_Effigy_C Usable_Effigy.Default__Usable_Effigy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Effigy_C* AUsable_Effigy_C::GetDefaultObj()
{
	static class AUsable_Effigy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Effigy_C*>(AUsable_Effigy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Effigy.Usable_Effigy_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Effigy_C::OnActorUsed(class APlayerController* Controller, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Effigy_C", "OnActorUsed");

	Params::AUsable_Effigy_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Effigy.Usable_Effigy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Effigy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Effigy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Effigy.Usable_Effigy_C.ExecuteUbergraph_Usable_Effigy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSingleAnimationPlayData    K2Node_MakeStruct_SingleAnimationPlayData                        (NoDestructor)
// struct FSingleAnimationPlayData    K2Node_MakeStruct_SingleAnimationPlayData_1                      (NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSingleAnimationPlayData    K2Node_Select_Default                                            (NoDestructor)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDeath_Statue_AnimBP_C*      K2Node_DynamicCast_AsDeath_Statue_Anim_BP                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Effigy_C::ExecuteUbergraph_Usable_Effigy(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FSingleAnimationPlayData& K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UDeath_Statue_AnimBP_C* K2Node_DynamicCast_AsDeath_Statue_Anim_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Effigy_C", "ExecuteUbergraph_Usable_Effigy");

	Params::AUsable_Effigy_C_ExecuteUbergraph_Usable_Effigy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_MakeStruct_SingleAnimationPlayData = K2Node_MakeStruct_SingleAnimationPlayData;
	Parms.K2Node_MakeStruct_SingleAnimationPlayData_1 = K2Node_MakeStruct_SingleAnimationPlayData_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDeath_Statue_Anim_BP = K2Node_DynamicCast_AsDeath_Statue_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


