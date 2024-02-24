#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedEnemy.RangedEnemy_C
// (Actor, Pawn)

class UClass* ARangedEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedEnemy_C");

	return Clss;
}


// RangedEnemy_C RangedEnemy.Default__RangedEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedEnemy_C* ARangedEnemy_C::GetDefaultObj()
{
	static class ARangedEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedEnemy_C*>(ARangedEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedEnemy.RangedEnemy_C.GetActiveProjectileLaunchVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::GetActiveProjectileLaunchVelocity(float* Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "GetActiveProjectileLaunchVelocity");

	Params::ARangedEnemy_C_GetActiveProjectileLaunchVelocity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = Parms.Velocity;

}


// Function RangedEnemy.RangedEnemy_C.GetActiveProjectileGravityScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              GravityScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::GetActiveProjectileGravityScale(float* GravityScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "GetActiveProjectileGravityScale");

	Params::ARangedEnemy_C_GetActiveProjectileGravityScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GravityScale != nullptr)
		*GravityScale = Parms.GravityScale;

}


// Function RangedEnemy.RangedEnemy_C.GetRangedAtkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      WeaponSkMesh                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::GetRangedAtkComponent(class USkeletalMeshComponent** WeaponSkMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "GetRangedAtkComponent");

	Params::ARangedEnemy_C_GetRangedAtkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponSkMesh != nullptr)
		*WeaponSkMesh = Parms.WeaponSkMesh;

}


// Function RangedEnemy.RangedEnemy_C.OnNotifyEnd_2D4E322F435995CF673A9D812786BF2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::OnNotifyEnd_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "OnNotifyEnd_2D4E322F435995CF673A9D812786BF2A");

	Params::ARangedEnemy_C_OnNotifyEnd_2D4E322F435995CF673A9D812786BF2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedEnemy.RangedEnemy_C.OnNotifyBegin_2D4E322F435995CF673A9D812786BF2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::OnNotifyBegin_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "OnNotifyBegin_2D4E322F435995CF673A9D812786BF2A");

	Params::ARangedEnemy_C_OnNotifyBegin_2D4E322F435995CF673A9D812786BF2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedEnemy.RangedEnemy_C.OnInterrupted_2D4E322F435995CF673A9D812786BF2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::OnInterrupted_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "OnInterrupted_2D4E322F435995CF673A9D812786BF2A");

	Params::ARangedEnemy_C_OnInterrupted_2D4E322F435995CF673A9D812786BF2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedEnemy.RangedEnemy_C.OnBlendOut_2D4E322F435995CF673A9D812786BF2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::OnBlendOut_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "OnBlendOut_2D4E322F435995CF673A9D812786BF2A");

	Params::ARangedEnemy_C_OnBlendOut_2D4E322F435995CF673A9D812786BF2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedEnemy.RangedEnemy_C.OnCompleted_2D4E322F435995CF673A9D812786BF2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::OnCompleted_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "OnCompleted_2D4E322F435995CF673A9D812786BF2A");

	Params::ARangedEnemy_C_OnCompleted_2D4E322F435995CF673A9D812786BF2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedEnemy.RangedEnemy_C.RangedAttackAnimSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedEnemy_C::RangedAttackAnimSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "RangedAttackAnimSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedEnemy.RangedEnemy_C.LaunchProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedEnemy_C::LaunchProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "LaunchProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedEnemy.RangedEnemy_C.RangedRetreatAnimSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedEnemy_C::RangedRetreatAnimSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "RangedRetreatAnimSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedEnemy.RangedEnemy_C.SwitchToMeleeMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedEnemy_C::SwitchToMeleeMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "SwitchToMeleeMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedEnemy.RangedEnemy_C.PlayMeleeAtkMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedEnemy_C::PlayMeleeAtkMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "PlayMeleeAtkMontage");

	Params::ARangedEnemy_C_PlayMeleeAtkMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedEnemy.RangedEnemy_C.ExecuteUbergraph_RangedEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_MontageToPlay                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartingPosition                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StartingSection                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ARangedEnemy_C::ExecuteUbergraph_RangedEnemy(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, float K2Node_CustomEvent_PlayRate, float K2Node_CustomEvent_StartingPosition, class FName K2Node_CustomEvent_StartingSection, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedEnemy_C", "ExecuteUbergraph_RangedEnemy");

	Params::ARangedEnemy_C_ExecuteUbergraph_RangedEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_MontageToPlay = K2Node_CustomEvent_MontageToPlay;
	Parms.K2Node_CustomEvent_PlayRate = K2Node_CustomEvent_PlayRate;
	Parms.K2Node_CustomEvent_StartingPosition = K2Node_CustomEvent_StartingPosition;
	Parms.K2Node_CustomEvent_StartingSection = K2Node_CustomEvent_StartingSection;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


