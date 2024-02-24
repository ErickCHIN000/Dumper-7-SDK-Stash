#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C
// (Actor)

class UClass* ABP_SkeletalItem_Dropship_Grenade_Flare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Dropship_Grenade_Flare_C");

	return Clss;
}


// BP_SkeletalItem_Dropship_Grenade_Flare_C BP_SkeletalItem_Dropship_Grenade_Flare.Default__BP_SkeletalItem_Dropship_Grenade_Flare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Dropship_Grenade_Flare_C* ABP_SkeletalItem_Dropship_Grenade_Flare_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Dropship_Grenade_Flare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Dropship_Grenade_Flare_C*>(ABP_SkeletalItem_Dropship_Grenade_Flare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.OnRep_PreviewType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::OnRep_PreviewType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "OnRep_PreviewType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.InitArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::InitArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "InitArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.OnProjectileFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InstigatorVelocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProjectileFireParams       AdvancedParameters                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::OnProjectileFired(const struct FVector& Impulse, const struct FVector& InstigatorVelocity, const struct FProjectileFireParams& AdvancedParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "OnProjectileFired");

	Params::ABP_SkeletalItem_Dropship_Grenade_Flare_C_OnProjectileFired_Params Parms{};

	Parms.Impulse = Impulse;
	Parms.InstigatorVelocity = InstigatorVelocity;
	Parms.AdvancedParameters = AdvancedParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.SetItemVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::SetItemVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "SetItemVisible");

	Params::ABP_SkeletalItem_Dropship_Grenade_Flare_C_SetItemVisible_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "ReceiveTick");

	Params::ABP_SkeletalItem_Dropship_Grenade_Flare_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.Multicast_HideFlareEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::Multicast_HideFlareEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "Multicast_HideFlareEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Dropship_Grenade_Flare.BP_SkeletalItem_Dropship_Grenade_Flare_C.ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPreviewActorType       Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_BallisticBehaviour_Base_C*CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Impulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_InstigatorVelocity                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProjectileFireParams       K2Node_CustomEvent_AdvancedParameters                            (NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLifeSpan_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Dropship_Grenade_Flare_C::ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, enum class EPreviewActorType Temp_wildcard_Variable, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UBP_BallisticBehaviour_Base_C* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, const struct FVector& K2Node_CustomEvent_Impulse, const struct FVector& K2Node_CustomEvent_InstigatorVelocity, const struct FProjectileFireParams& K2Node_CustomEvent_AdvancedParameters, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool K2Node_Event_bVisible, float K2Node_Event_DeltaSeconds, float CallFunc_GetLifeSpan_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Dropship_Grenade_Flare_C", "ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare");

	Params::ABP_SkeletalItem_Dropship_Grenade_Flare_C_ExecuteUbergraph_BP_SkeletalItem_Dropship_Grenade_Flare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_Impulse = K2Node_CustomEvent_Impulse;
	Parms.K2Node_CustomEvent_InstigatorVelocity = K2Node_CustomEvent_InstigatorVelocity;
	Parms.K2Node_CustomEvent_AdvancedParameters = K2Node_CustomEvent_AdvancedParameters;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetLifeSpan_ReturnValue = CallFunc_GetLifeSpan_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


