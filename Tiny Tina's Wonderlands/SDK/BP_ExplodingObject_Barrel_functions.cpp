#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C
// (Actor)

class UClass* ABP_ExplodingObject_Barrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplodingObject_Barrel_C");

	return Clss;
}


// BP_ExplodingObject_Barrel_C BP_ExplodingObject_Barrel.Default__BP_ExplodingObject_Barrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExplodingObject_Barrel_C* ABP_ExplodingObject_Barrel_C::GetDefaultObj()
{
	static class ABP_ExplodingObject_Barrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExplodingObject_Barrel_C*>(ABP_ExplodingObject_Barrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.GetPullScale
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_ExplodingObject_Barrel_C::GetPullScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "GetPullScale");

	Params::ABP_ExplodingObject_Barrel_C_GetPullScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnRep_bSingularityGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_Barrel_C::OnRep_bSingularityGrabbed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "OnRep_bSingularityGrabbed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Setup_ExplodingObject
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_ExplodingObjectPresentation_C*NewPresentation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    DynamicMI                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    MyDynamicMI                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ExplodingObjectDamageCallFunc_Get_DamageType_DamageType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Setup_ExplodingObject_DynamicMI                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue4                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue5                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue1                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue6                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue7                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue2                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue8                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue9                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue3                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI, class UMaterialInstanceDynamic* MyDynamicMI, enum class Enum_ExplodingObjectDamage CallFunc_Get_DamageType_DamageType, class UMaterialInstanceDynamic* CallFunc_Setup_ExplodingObject_DynamicMI, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue5, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue6, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue7, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue8, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue9, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "Setup_ExplodingObject");

	Params::ABP_ExplodingObject_Barrel_C_Setup_ExplodingObject_Params Parms{};

	Parms.NewPresentation = NewPresentation;
	Parms.MyDynamicMI = MyDynamicMI;
	Parms.CallFunc_Get_DamageType_DamageType = CallFunc_Get_DamageType_DamageType;
	Parms.CallFunc_Setup_ExplodingObject_DynamicMI = CallFunc_Setup_ExplodingObject_DynamicMI;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue1 = CallFunc_GetVectorParameterValue_ReturnValue1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue2 = CallFunc_GetVectorParameterValue_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue3 = CallFunc_GetVectorParameterValue_ReturnValue3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue4 = CallFunc_GetVectorParameterValue_ReturnValue4;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue5 = CallFunc_GetVectorParameterValue_ReturnValue5;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue1 = CallFunc_Multiply_LinearColorFloat_ReturnValue1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue6 = CallFunc_GetVectorParameterValue_ReturnValue6;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue7 = CallFunc_GetVectorParameterValue_ReturnValue7;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue2 = CallFunc_Multiply_LinearColorFloat_ReturnValue2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue8 = CallFunc_GetVectorParameterValue_ReturnValue8;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue9 = CallFunc_GetVectorParameterValue_ReturnValue9;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue3 = CallFunc_Multiply_LinearColorFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicMI != nullptr)
		*DynamicMI = Parms.DynamicMI;

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Barrel_SetupMaterialParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BaseColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HighlightColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CompTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    NormalTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    NormalMap                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CompMap                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TextureIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    DynamicMaterial                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ElementalColor_Base                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ElementalColor_Highlight                                         (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatFromStream_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatFromStream_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatFromStream_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_FloatToLinearColor_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::Barrel_SetupMaterialParams(class UMaterialInstanceDynamic* Material, const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, class UTexture* CompTexture, class UTexture* NormalTexture, class UTexture* NormalMap, class UTexture* CompMap, float TextureIndex, class UMaterialInstanceDynamic* DynamicMaterial, const struct FLinearColor& ElementalColor_Base, const struct FLinearColor& ElementalColor_Highlight, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue3, float CallFunc_MapRangeClamped_ReturnValue4, float CallFunc_RandomFloatFromStream_ReturnValue2, float CallFunc_FMax_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FMax_ReturnValue1, const struct FLinearColor& CallFunc_Conv_FloatToLinearColor_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "Barrel_SetupMaterialParams");

	Params::ABP_ExplodingObject_Barrel_C_Barrel_SetupMaterialParams_Params Parms{};

	Parms.Material = Material;
	Parms.BaseColor = BaseColor;
	Parms.HighlightColor = HighlightColor;
	Parms.CompTexture = CompTexture;
	Parms.NormalTexture = NormalTexture;
	Parms.NormalMap = NormalMap;
	Parms.CompMap = CompMap;
	Parms.TextureIndex = TextureIndex;
	Parms.DynamicMaterial = DynamicMaterial;
	Parms.ElementalColor_Base = ElementalColor_Base;
	Parms.ElementalColor_Highlight = ElementalColor_Highlight;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_RandomFloatFromStream_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
	Parms.CallFunc_RandomFloatFromStream_ReturnValue1 = CallFunc_RandomFloatFromStream_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue2 = CallFunc_MapRangeClamped_ReturnValue2;
	Parms.CallFunc_MapRangeClamped_ReturnValue3 = CallFunc_MapRangeClamped_ReturnValue3;
	Parms.CallFunc_MapRangeClamped_ReturnValue4 = CallFunc_MapRangeClamped_ReturnValue4;
	Parms.CallFunc_RandomFloatFromStream_ReturnValue2 = CallFunc_RandomFloatFromStream_ReturnValue2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue1 = CallFunc_FMax_ReturnValue1;
	Parms.CallFunc_Conv_FloatToLinearColor_ReturnValue = CallFunc_Conv_FloatToLinearColor_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_Barrel_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_NPC_Kick_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       User                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::SmartObject_NPC_Kick_Begin(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "SmartObject_NPC_Kick_Begin");

	Params::ABP_ExplodingObject_Barrel_C_SmartObject_NPC_Kick_Begin_Params Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_Barrel_GoonInteract_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       User                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::SmartObject_Barrel_GoonInteract_Success(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "SmartObject_Barrel_GoonInteract_Success");

	Params::ABP_ExplodingObject_Barrel_C_SmartObject_Barrel_GoonInteract_Success_Params Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerKickBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::PlayerKickBarrel(class ACharacter* Char)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "PlayerKickBarrel");

	Params::ABP_ExplodingObject_Barrel_C_PlayerKickBarrel_Params Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerButtSlamBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::PlayerButtSlamBarrel(class ACharacter* Char)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "PlayerButtSlamBarrel");

	Params::ABP_ExplodingObject_Barrel_C_PlayerButtSlamBarrel_Params Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerMeleeBarrel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::PlayerMeleeBarrel(class ACharacter* Char)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "PlayerMeleeBarrel");

	Params::ABP_ExplodingObject_Barrel_C_PlayerMeleeBarrel_Params Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Damaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "Damaged");

	Params::ABP_ExplodingObject_Barrel_C_Damaged_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel
// (BlueprintEvent)
// Parameters:
// class AActor*                      TouchingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             ComponentTouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel");

	Params::ABP_ExplodingObject_Barrel_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel_Params Parms{};

	Parms.TouchingActor = TouchingActor;
	Parms.bIsPlayer = bIsPlayer;
	Parms.ComponentTouched = ComponentTouched;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class USingularityComponent*       SingularityComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::OnSingularityPullBegin(class USingularityComponent* SingularityComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "OnSingularityPullBegin");

	Params::ABP_ExplodingObject_Barrel_C_OnSingularityPullBegin_Params Parms{};

	Parms.SingularityComponent = SingularityComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class USingularityComponent*       SingularityComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::OnSingularityPullEnd(class USingularityComponent* SingularityComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "OnSingularityPullEnd");

	Params::ABP_ExplodingObject_Barrel_C_OnSingularityPullEnd_Params Parms{};

	Parms.SingularityComponent = SingularityComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Explode_Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_Barrel_C::Explode_Damage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "Explode_Damage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.IronBearFisted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::IronBearFisted(class ACharacter* Char)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "IronBearFisted");

	Params::ABP_ExplodingObject_Barrel_C_IronBearFisted_Params Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_Barrel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.DEBUG_PrematureExplosion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_Barrel_C::DEBUG_PrematureExplosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "DEBUG_PrematureExplosion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ThrowExplodingObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ThrowVector                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RotatorForSpin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                     OptionalAdditiveVector                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_Barrel_C::ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "ThrowExplodingObject");

	Params::ABP_ExplodingObject_Barrel_C_ThrowExplodingObject_Params Parms{};

	Parms.ThrowVector = ThrowVector;
	Parms.Force = Force;
	Parms.RotatorForSpin = RotatorForSpin;
	Parms.OptionalAdditiveVector = OptionalAdditiveVector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OverridePrematureDebug
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_Barrel_C::OverridePrematureDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "OverridePrematureDebug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ExecuteUbergraph_BP_ExplodingObject_Barrel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_GbxBlueprintActionEvent_User1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_GbxBlueprintActionEvent_User                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_Char3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_Char2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_Char1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue2                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue2                                (IsPlainOldData, NoDestructor)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_Event_DamageSource                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_ComponentBoundEvent_TouchingActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_ComponentBoundEvent_ComponentTouched                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USingularityComponent*       K2Node_Event_SingularityComponent1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USingularityComponent*       K2Node_Event_SingularityComponent                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_CustomEvent_Char                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue3                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue3                                (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ThrowVector                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Force                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_RotatorForSpin                                      (IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_OptionalAdditiveVector                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditorSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue4                                (IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_Barrel_C::ExecuteUbergraph_BP_ExplodingObject_Barrel(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_HasAuthority_ReturnValue1, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2, bool CallFunc_HasAuthority_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, bool Temp_bool_IsClosed_Variable3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* K2Node_GbxBlueprintActionEvent_User1, class APawn* K2Node_GbxBlueprintActionEvent_User, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACharacter* K2Node_CustomEvent_Char3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue5, class ACharacter* K2Node_CustomEvent_Char2, class ACharacter* K2Node_CustomEvent_Char1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue2, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue6, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_RandomFloatInRange_ReturnValue7, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_Compare_Damage_Source_Equal2, bool CallFunc_Compare_Damage_Source_Not_Equal2, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class USingularityComponent* K2Node_Event_SingularityComponent1, class USingularityComponent* K2Node_Event_SingularityComponent, bool CallFunc_HasAuthority_ReturnValue3, class ACharacter* K2Node_CustomEvent_Char, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue8, float CallFunc_RandomFloatInRange_ReturnValue9, bool Temp_bool_Has_Been_Initd_Variable3, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetCurrentHealthPercent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const struct FVector& K2Node_Event_ThrowVector, float K2Node_Event_Force, const struct FRotator& K2Node_Event_RotatorForSpin, const struct FVector& K2Node_Event_OptionalAdditiveVector, bool CallFunc_IsEditorSession_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue10, const struct FRotator& CallFunc_MakeRotator_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_Barrel_C", "ExecuteUbergraph_BP_ExplodingObject_Barrel");

	Params::ABP_ExplodingObject_Barrel_C_ExecuteUbergraph_BP_ExplodingObject_Barrel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable3 = Temp_bool_IsClosed_Variable3;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_GbxBlueprintActionEvent_User1 = K2Node_GbxBlueprintActionEvent_User1;
	Parms.K2Node_GbxBlueprintActionEvent_User = K2Node_GbxBlueprintActionEvent_User;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_CustomEvent_Char3 = K2Node_CustomEvent_Char3;
	Parms.CallFunc_GetActorForwardVector_ReturnValue1 = CallFunc_GetActorForwardVector_ReturnValue1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.CallFunc_MakeRotator_ReturnValue1 = CallFunc_MakeRotator_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue4 = CallFunc_RandomFloatInRange_ReturnValue4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue5 = CallFunc_RandomFloatInRange_ReturnValue5;
	Parms.K2Node_CustomEvent_Char2 = K2Node_CustomEvent_Char2;
	Parms.K2Node_CustomEvent_Char1 = K2Node_CustomEvent_Char1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue2 = CallFunc_GetActorForwardVector_ReturnValue2;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue6 = CallFunc_RandomFloatInRange_ReturnValue6;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_RandomFloatInRange_ReturnValue7 = CallFunc_RandomFloatInRange_ReturnValue7;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue2 = CallFunc_MakeRotator_ReturnValue2;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamageSource = K2Node_Event_DamageSource;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.CallFunc_Compare_Damage_Source_Equal1 = CallFunc_Compare_Damage_Source_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal1 = CallFunc_Compare_Damage_Source_Not_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Equal2 = CallFunc_Compare_Damage_Source_Equal2;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal2 = CallFunc_Compare_Damage_Source_Not_Equal2;
	Parms.K2Node_ComponentBoundEvent_TouchingActor = K2Node_ComponentBoundEvent_TouchingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer = K2Node_ComponentBoundEvent_bIsPlayer;
	Parms.K2Node_ComponentBoundEvent_ComponentTouched = K2Node_ComponentBoundEvent_ComponentTouched;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_SingularityComponent1 = K2Node_Event_SingularityComponent1;
	Parms.K2Node_Event_SingularityComponent = K2Node_Event_SingularityComponent;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.K2Node_CustomEvent_Char = K2Node_CustomEvent_Char;
	Parms.CallFunc_GetActorForwardVector_ReturnValue3 = CallFunc_GetActorForwardVector_ReturnValue3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue8 = CallFunc_RandomFloatInRange_ReturnValue8;
	Parms.CallFunc_RandomFloatInRange_ReturnValue9 = CallFunc_RandomFloatInRange_ReturnValue9;
	Parms.Temp_bool_Has_Been_Initd_Variable3 = Temp_bool_Has_Been_Initd_Variable3;
	Parms.CallFunc_MakeRotator_ReturnValue3 = CallFunc_MakeRotator_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.K2Node_Event_ThrowVector = K2Node_Event_ThrowVector;
	Parms.K2Node_Event_Force = K2Node_Event_Force;
	Parms.K2Node_Event_RotatorForSpin = K2Node_Event_RotatorForSpin;
	Parms.K2Node_Event_OptionalAdditiveVector = K2Node_Event_OptionalAdditiveVector;
	Parms.CallFunc_IsEditorSession_ReturnValue = CallFunc_IsEditorSession_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue10 = CallFunc_RandomFloatInRange_ReturnValue10;
	Parms.CallFunc_MakeRotator_ReturnValue4 = CallFunc_MakeRotator_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}


