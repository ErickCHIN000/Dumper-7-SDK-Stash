#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C
// (Actor)

class UClass* Abp_small_physics_prop_guitar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_small_physics_prop_guitar_C");

	return Clss;
}


// bp_small_physics_prop_guitar_C bp_small_physics_prop_guitar.Default__bp_small_physics_prop_guitar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_small_physics_prop_guitar_C* Abp_small_physics_prop_guitar_C::GetDefaultObj()
{
	static class Abp_small_physics_prop_guitar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_small_physics_prop_guitar_C*>(Abp_small_physics_prop_guitar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.StopClockworkLuteAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::StopClockworkLuteAnim(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "StopClockworkLuteAnim");

	Params::Abp_small_physics_prop_guitar_C_StopClockworkLuteAnim_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.PlayClockworkLuteAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::PlayClockworkLuteAnim(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "PlayClockworkLuteAnim");

	Params::Abp_small_physics_prop_guitar_C_PlayClockworkLuteAnim_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::SetOpacity(float Opacity, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "SetOpacity");

	Params::Abp_small_physics_prop_guitar_C_SetOpacity_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.SetClockworkLute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::SetClockworkLute(class UMaterialInterface* Temp_object_Variable, const struct FTransform& Temp_struct_Variable, bool CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes_1, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "SetClockworkLute");

	Params::Abp_small_physics_prop_guitar_C_SetClockworkLute_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes = CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes_1 = CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.SetImperviousLute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::SetImperviousLute(bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "SetImperviousLute");

	Params::Abp_small_physics_prop_guitar_C_SetImperviousLute_Params Parms{};

	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGuitar_usable_child_actor_C*K2Node_DynamicCast_AsGuitar_Usable_Child_Actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::UserConstructionScript(class AGuitar_usable_child_actor_C* K2Node_DynamicCast_AsGuitar_Usable_Child_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "UserConstructionScript");

	Params::Abp_small_physics_prop_guitar_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_DynamicCast_AsGuitar_Usable_Child_Actor = K2Node_DynamicCast_AsGuitar_Usable_Child_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.Fade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "Fade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.Fade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "Fade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.DestructibleFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::DestructibleFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "DestructibleFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.DestructibleFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::DestructibleFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "DestructibleFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::Destroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "Destroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.FadeOut_Reverse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_small_physics_prop_guitar_C::FadeOut_Reverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "FadeOut_Reverse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C.ExecuteUbergraph_bp_small_physics_prop_guitar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActorBeingDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_small_physics_prop_guitar_C::ExecuteUbergraph_bp_small_physics_prop_guitar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsActorBeingDestroyed_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_small_physics_prop_guitar_C", "ExecuteUbergraph_bp_small_physics_prop_guitar");

	Params::Abp_small_physics_prop_guitar_C_ExecuteUbergraph_bp_small_physics_prop_guitar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsActorBeingDestroyed_ReturnValue = CallFunc_IsActorBeingDestroyed_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomUnitVector_ReturnValue_1 = CallFunc_RandomUnitVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_RandomUnitVector_ReturnValue_2 = CallFunc_RandomUnitVector_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomUnitVector_ReturnValue_3 = CallFunc_RandomUnitVector_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_5 = CallFunc_Multiply_VectorFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_6 = CallFunc_Multiply_VectorFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_7 = CallFunc_Multiply_VectorFloat_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


