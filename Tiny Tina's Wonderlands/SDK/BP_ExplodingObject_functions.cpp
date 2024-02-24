#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplodingObject.BP_ExplodingObject_C
// (Actor)

class UClass* ABP_ExplodingObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplodingObject_C");

	return Clss;
}


// BP_ExplodingObject_C BP_ExplodingObject.Default__BP_ExplodingObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExplodingObject_C* ABP_ExplodingObject_C::GetDefaultObj()
{
	static class ABP_ExplodingObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExplodingObject_C*>(ABP_ExplodingObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewSimulate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::SetSimulatePhysics(bool bNewSimulate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "SetSimulatePhysics");

	Params::ABP_ExplodingObject_C_SetSimulatePhysics_Params Parms{};

	Parms.bNewSimulate = bNewSimulate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_ByteByte_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentHealth_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue1, float CallFunc_GetCurrentHealth_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Damaged");

	Params::ABP_ExplodingObject_C_Damaged_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue1 = CallFunc_Greater_ByteByte_ReturnValue1;
	Parms.CallFunc_GetCurrentHealth_ReturnValue = CallFunc_GetCurrentHealth_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::VisualState_ExplodedStop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "VisualState_ExplodedStop");

	Params::ABP_ExplodingObject_C_VisualState_ExplodedStop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::VisualState_ExplodedStart(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "VisualState_ExplodedStart");

	Params::ABP_ExplodingObject_C_VisualState_ExplodedStart_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_ExplodingObjectDamageDamageType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_C::Get_DamageType(enum class Enum_ExplodingObjectDamage* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Get_DamageType");

	Params::ABP_ExplodingObject_C_Get_DamageType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageType != nullptr)
		*DamageType = Parms.DamageType;

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseAudioComponent*        CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::VisualState_FuseStop(class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "VisualState_FuseStop");

	Params::ABP_ExplodingObject_C_VisualState_FuseStop_Params Parms{};

	Parms.CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue = CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_IsAudioPlaying_ReturnValue = CallFunc_IsAudioPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)

void ABP_ExplodingObject_C::VisualState_FuseStart(const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "VisualState_FuseStart");

	Params::ABP_ExplodingObject_C_VisualState_FuseStart_Params Parms{};

	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_ExplodingObjectPresentation_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_Setup_ExplodingObject_DynamicMI                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_C::OnRep_DamageType(class UDA_ExplodingObjectPresentation_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Setup_ExplodingObject_DynamicMI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "OnRep_DamageType");

	Params::ABP_ExplodingObject_C_OnRep_DamageType_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Setup_ExplodingObject_DynamicMI = CallFunc_Setup_ExplodingObject_DynamicMI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ThrowVector                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RotatorForSpin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                     OptionalAdditiveVector                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_C::ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "ThrowExplodingObject");

	Params::ABP_ExplodingObject_C_ThrowExplodingObject_Params Parms{};

	Parms.ThrowVector = ThrowVector;
	Parms.Force = Force;
	Parms.RotatorForSpin = RotatorForSpin;
	Parms.OptionalAdditiveVector = OptionalAdditiveVector;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_ExplodingObjectPresentation_C*NewPresentation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    DynamicMI                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMesh*                 CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UStaticMesh* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInstance* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Setup_ExplodingObject");

	Params::ABP_ExplodingObject_C_Setup_ExplodingObject_Params Parms{};

	Parms.NewPresentation = NewPresentation;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue1 = CallFunc_SetStaticMesh_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicMI != nullptr)
		*DynamicMI = Parms.DynamicMI;

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int32, uint8>                 MyBitmaskLookup                                                  (Edit, BlueprintVisible, ZeroConstructor)
// int32                              MyTestResult                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      MyTest                                                           (Edit, BlueprintVisible, ZeroConstructor)
// enum class Enum_ExplodingObjectDamageMyDamageType                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class Enum_ExplodingObjectDamage>MyDamageTypes                                                    (Edit, BlueprintVisible, ZeroConstructor)
// TArray<enum class Enum_IO_Combat_Barrel>MyBarrelOptions                                                  (Edit, BlueprintVisible, ZeroConstructor)
// TMap<int32, uint8>                 K2Node_MakeVariable_MakeVariableOutput                           (ZeroConstructor)
// uint8                              CallFunc_Bitmask_RandomEnum_RandomEnum                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_ExplodingObjectPresentation_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::Setup_RandomizeDamageType(TMap<int32, uint8> MyBitmaskLookup, int32 MyTestResult, const TArray<int32>& MyTest, enum class Enum_ExplodingObjectDamage MyDamageType, const TArray<enum class Enum_ExplodingObjectDamage>& MyDamageTypes, const TArray<enum class Enum_IO_Combat_Barrel>& MyBarrelOptions, TMap<int32, uint8> K2Node_MakeVariable_MakeVariableOutput, uint8 CallFunc_Bitmask_RandomEnum_RandomEnum, uint8 CallFunc_GetValidValue_ReturnValue, class UDA_ExplodingObjectPresentation_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Setup_RandomizeDamageType");

	Params::ABP_ExplodingObject_C_Setup_RandomizeDamageType_Params Parms{};

	Parms.MyBitmaskLookup = MyBitmaskLookup;
	Parms.MyTestResult = MyTestResult;
	Parms.MyTest = MyTest;
	Parms.MyDamageType = MyDamageType;
	Parms.MyDamageTypes = MyDamageTypes;
	Parms.MyBarrelOptions = MyBarrelOptions;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Bitmask_RandomEnum_RandomEnum = CallFunc_Bitmask_RandomEnum_RandomEnum;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "UserConstructionScript");

	Params::ABP_ExplodingObject_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::BPI_ResetHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BPI_ResetHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ExplodingObject_C::BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal");

	Params::ABP_ExplodingObject_C_BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::BPI_Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BPI_Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ThrowVector                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RotatorForSpin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              FuseSpeedScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AdditiveVector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BPI_ImpulseThrow");

	Params::ABP_ExplodingObject_C_BPI_ImpulseThrow_Params Parms{};

	Parms.ThrowVector = ThrowVector;
	Parms.Force = Force;
	Parms.RotatorForSpin = RotatorForSpin;
	Parms.FuseSpeedScale = FuseSpeedScale;
	Parms.AdditiveVector = AdditiveVector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PhysicsOn_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::BPI_SetSimulatePhysics(bool PhysicsOn_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BPI_SetSimulatePhysics");

	Params::ABP_ExplodingObject_C_BPI_SetSimulatePhysics_Params Parms{};

	Parms.PhysicsOn_ = PhysicsOn_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::BPI_StartFuse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BPI_StartFuse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_0
// (BlueprintEvent)
// Parameters:
// bool                               bFromLoad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_0(bool bFromLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "__UserState_ExplodingObjectState_0");

	Params::ABP_ExplodingObject_C___UserState_ExplodingObjectState_0_Params Parms{};

	Parms.bFromLoad = bFromLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1
// (BlueprintEvent)
// Parameters:
// bool                               bFromLoad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_1(bool bFromLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "__UserState_ExplodingObjectState_1");

	Params::ABP_ExplodingObject_C___UserState_ExplodingObjectState_1_Params Parms{};

	Parms.bFromLoad = bFromLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2
// (BlueprintEvent)
// Parameters:
// bool                               bFromLoad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_2(bool bFromLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "__UserState_ExplodingObjectState_2");

	Params::ABP_ExplodingObject_C___UserState_ExplodingObjectState_2_Params Parms{};

	Parms.bFromLoad = bFromLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3
// (BlueprintEvent)
// Parameters:
// bool                               bFromLoad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_3(bool bFromLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "__UserState_ExplodingObjectState_3");

	Params::ABP_ExplodingObject_C___UserState_ExplodingObjectState_3_Params Parms{};

	Parms.bFromLoad = bFromLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_ExplodingObject_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject");

	Params::ABP_ExplodingObject_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::Explode_Damage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Explode_Damage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::Explode_Puddle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Explode_Puddle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::Explode_Cloud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Explode_Cloud");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::Explode_Loot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Explode_Loot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         WakingComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_C::BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* WakingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject");

	Params::ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject_Params Parms{};

	Parms.WakingComponent = WakingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         SleepingComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_C::BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* SleepingComponent, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject");

	Params::ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject_Params Parms{};

	Parms.SleepingComponent = SleepingComponent;
	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "BPI_SetNavPainterEnabled");

	Params::ABP_ExplodingObject_C_BPI_SetNavPainterEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_ThrowVector                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Force                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_RotatorForSpin                                      (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_FuseSpeedScale                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_AdditiveVector                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PhysicsOn_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_UserStateEvent_bFromLoad3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_UserStateEvent_bFromLoad2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_UserStateEvent_bFromLoad1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_UserStateEvent_bFromLoad                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_ByteByte_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Damage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_ComponentBoundEvent_DamageType                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_ComponentBoundEvent_DamageSource                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_ComponentBoundEvent_InstigatedBy                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      K2Node_ComponentBoundEvent_Details                               (ContainsInstancedReference)
// class ACharacter*                  CallFunc_GetAssociatedCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Greater_ByteByte_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpawnDroppedPickupLootRequestK2Node_MakeStruct_SpawnDroppedPickupLootRequest                  (ContainsInstancedReference)
// int32                              CallFunc_SpawnLootAsync_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AElementalPuddle*            CallFunc_SpawnElementalPuddle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_ByteByte_ReturnValue5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_WakingComponent                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_BoneName1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_SleepingComponent                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_BoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_C::ExecuteUbergraph_BP_ExplodingObject(int32 EntryPoint, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_ThrowVector, float K2Node_Event_Force, const struct FRotator& K2Node_Event_RotatorForSpin, float K2Node_Event_FuseSpeedScale, const struct FVector& K2Node_Event_AdditiveVector, bool K2Node_Event_PhysicsOn_, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue2, bool K2Node_UserStateEvent_bFromLoad3, bool K2Node_UserStateEvent_bFromLoad2, bool K2Node_UserStateEvent_bFromLoad1, bool K2Node_UserStateEvent_bFromLoad, bool CallFunc_HasAuthority_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue4, bool CallFunc_Greater_ByteByte_ReturnValue2, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, float K2Node_ComponentBoundEvent_Damage, class UGbxDamageType* K2Node_ComponentBoundEvent_DamageType, class UDamageSource* K2Node_ComponentBoundEvent_DamageSource, class AController* K2Node_ComponentBoundEvent_InstigatedBy, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_ComponentBoundEvent_Details, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& Temp_struct_Variable, bool CallFunc_Greater_ByteByte_ReturnValue3, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue1, bool CallFunc_Greater_ByteByte_ReturnValue4, class FName CallFunc_Conv_StringToName_ReturnValue1, const struct FHitResult& Temp_struct_Variable1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, int32 CallFunc_SpawnLootAsync_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AElementalPuddle* CallFunc_SpawnElementalPuddle_ReturnValue, bool CallFunc_HasAuthority_ReturnValue5, bool CallFunc_Greater_ByteByte_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, class FName K2Node_ComponentBoundEvent_BoneName1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, class FName K2Node_ComponentBoundEvent_BoneName, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_Event_Enabled, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "ExecuteUbergraph_BP_ExplodingObject");

	Params::ABP_ExplodingObject_C_ExecuteUbergraph_BP_ExplodingObject_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue1 = CallFunc_Greater_ByteByte_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_ThrowVector = K2Node_Event_ThrowVector;
	Parms.K2Node_Event_Force = K2Node_Event_Force;
	Parms.K2Node_Event_RotatorForSpin = K2Node_Event_RotatorForSpin;
	Parms.K2Node_Event_FuseSpeedScale = K2Node_Event_FuseSpeedScale;
	Parms.K2Node_Event_AdditiveVector = K2Node_Event_AdditiveVector;
	Parms.K2Node_Event_PhysicsOn_ = K2Node_Event_PhysicsOn_;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.K2Node_UserStateEvent_bFromLoad3 = K2Node_UserStateEvent_bFromLoad3;
	Parms.K2Node_UserStateEvent_bFromLoad2 = K2Node_UserStateEvent_bFromLoad2;
	Parms.K2Node_UserStateEvent_bFromLoad1 = K2Node_UserStateEvent_bFromLoad1;
	Parms.K2Node_UserStateEvent_bFromLoad = K2Node_UserStateEvent_bFromLoad;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_Greater_ByteByte_ReturnValue2 = CallFunc_Greater_ByteByte_ReturnValue2;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_Damage = K2Node_ComponentBoundEvent_Damage;
	Parms.K2Node_ComponentBoundEvent_DamageType = K2Node_ComponentBoundEvent_DamageType;
	Parms.K2Node_ComponentBoundEvent_DamageSource = K2Node_ComponentBoundEvent_DamageSource;
	Parms.K2Node_ComponentBoundEvent_InstigatedBy = K2Node_ComponentBoundEvent_InstigatedBy;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.K2Node_ComponentBoundEvent_Details = K2Node_ComponentBoundEvent_Details;
	Parms.CallFunc_GetAssociatedCharacter_ReturnValue = CallFunc_GetAssociatedCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Greater_ByteByte_ReturnValue3 = CallFunc_Greater_ByteByte_ReturnValue3;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue1 = CallFunc_GetObjectName_ReturnValue1;
	Parms.CallFunc_Greater_ByteByte_ReturnValue4 = CallFunc_Greater_ByteByte_ReturnValue4;
	Parms.CallFunc_Conv_StringToName_ReturnValue1 = CallFunc_Conv_StringToName_ReturnValue1;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue1 = CallFunc_IsValidClass_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue2 = CallFunc_IsValidClass_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_MakeStruct_SpawnDroppedPickupLootRequest = K2Node_MakeStruct_SpawnDroppedPickupLootRequest;
	Parms.CallFunc_SpawnLootAsync_ReturnValue = CallFunc_SpawnLootAsync_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnElementalPuddle_ReturnValue = CallFunc_SpawnElementalPuddle_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue5 = CallFunc_HasAuthority_ReturnValue5;
	Parms.CallFunc_Greater_ByteByte_ReturnValue5 = CallFunc_Greater_ByteByte_ReturnValue5;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_WakingComponent = K2Node_ComponentBoundEvent_WakingComponent;
	Parms.K2Node_ComponentBoundEvent_BoneName1 = K2Node_ComponentBoundEvent_BoneName1;
	Parms.K2Node_ComponentBoundEvent_SleepingComponent = K2Node_ComponentBoundEvent_SleepingComponent;
	Parms.K2Node_ComponentBoundEvent_BoneName = K2Node_ComponentBoundEvent_BoneName;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_C::Exploded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_C", "Exploded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


