#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Feat_GunMage.Feat_GunMage_C
// (None)

class UClass* UFeat_GunMage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Feat_GunMage_C");

	return Clss;
}


// Feat_GunMage_C Feat_GunMage.Default__Feat_GunMage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeat_GunMage_C* UFeat_GunMage_C::GetDefaultObj()
{
	static class UFeat_GunMage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeat_GunMage_C*>(UFeat_GunMage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Feat_GunMage.Feat_GunMage_C.GunMageSetWildMagicGrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewGrade                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::GunMageSetWildMagicGrade(int32 NewGrade, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "GunMageSetWildMagicGrade");

	Params::UFeat_GunMage_C_GunMageSetWildMagicGrade_Params Parms{};

	Parms.NewGrade = NewGrade;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.TogglePolymorphLocks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PolymoprhTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnableLocks                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeam*                       StartingTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeam*                       LocalStartingTeam                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalEnableLocks                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      LocalPolymorphTarget                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_GunMage_C::TogglePolymorphLocks(class AActor* PolymoprhTarget, bool EnableLocks, class UTeam* StartingTeam, bool* Res, class UTeam* LocalStartingTeam, bool LocalEnableLocks, class AActor* LocalPolymorphTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "TogglePolymorphLocks");

	Params::UFeat_GunMage_C_TogglePolymorphLocks_Params Parms{};

	Parms.PolymoprhTarget = PolymoprhTarget;
	Parms.EnableLocks = EnableLocks;
	Parms.StartingTeam = StartingTeam;
	Parms.LocalStartingTeam = LocalStartingTeam;
	Parms.LocalEnableLocks = LocalEnableLocks;
	Parms.LocalPolymorphTarget = LocalPolymorphTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.GetSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_GunMage_C::GetSpellweavingStacks(int32* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "GetSpellweavingStacks");

	Params::UFeat_GunMage_C_GetSpellweavingStacks_Params Parms{};

	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid2 = CallFunc_BreakResourcePoolReference_bValid2;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue2 = CallFunc_BreakResourcePoolReference_CurrentValue2;
	Parms.CallFunc_BreakResourcePoolReference_MinValue2 = CallFunc_BreakResourcePoolReference_MinValue2;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue2 = CallFunc_BreakResourcePoolReference_MaxValue2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.RemoveAllSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeStackAmount_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::RemoveAllSpellweavingStacks(bool Force, bool* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanChangeStackAmount_Res, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "RemoveAllSpellweavingStacks");

	Params::UFeat_GunMage_C_RemoveAllSpellweavingStacks_Params Parms{};

	Parms.Force = Force;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanChangeStackAmount_Res = CallFunc_CanChangeStackAmount_Res;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.AddSpellweavingStacks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stacks                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BumStacks                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LocalStacks                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       ExtraStackChance                                                 (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeStackAmount_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::AddSpellweavingStacks(int32 Stacks, int32* Res, bool BumStacks, int32 LocalStacks, const struct FDataTableValueHandle& ExtraStackChance, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid3, float CallFunc_BreakResourcePoolReference_CurrentValue3, float CallFunc_BreakResourcePoolReference_MinValue3, float CallFunc_BreakResourcePoolReference_MaxValue3, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CanChangeStackAmount_Res, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "AddSpellweavingStacks");

	Params::UFeat_GunMage_C_AddSpellweavingStacks_Params Parms{};

	Parms.Stacks = Stacks;
	Parms.BumStacks = BumStacks;
	Parms.LocalStacks = LocalStacks;
	Parms.ExtraStackChance = ExtraStackChance;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid2 = CallFunc_BreakResourcePoolReference_bValid2;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue2 = CallFunc_BreakResourcePoolReference_CurrentValue2;
	Parms.CallFunc_BreakResourcePoolReference_MinValue2 = CallFunc_BreakResourcePoolReference_MinValue2;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue2 = CallFunc_BreakResourcePoolReference_MaxValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid3 = CallFunc_BreakResourcePoolReference_bValid3;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue3 = CallFunc_BreakResourcePoolReference_CurrentValue3;
	Parms.CallFunc_BreakResourcePoolReference_MinValue3 = CallFunc_BreakResourcePoolReference_MinValue3;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue3 = CallFunc_BreakResourcePoolReference_MaxValue3;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_CanChangeStackAmount_Res = CallFunc_CanChangeStackAmount_Res;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.RemoveSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stacks                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeStackAmount_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_GunMage_C::RemoveSpellweavingStacks(int32 Stacks, int32* Res, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanChangeStackAmount_Res, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "RemoveSpellweavingStacks");

	Params::UFeat_GunMage_C_RemoveSpellweavingStacks_Params Parms{};

	Parms.Stacks = Stacks;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanChangeStackAmount_Res = CallFunc_CanChangeStackAmount_Res;
	Parms.CallFunc_BreakResourcePoolReference_bValid2 = CallFunc_BreakResourcePoolReference_bValid2;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue2 = CallFunc_BreakResourcePoolReference_CurrentValue2;
	Parms.CallFunc_BreakResourcePoolReference_MinValue2 = CallFunc_BreakResourcePoolReference_MinValue2;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue2 = CallFunc_BreakResourcePoolReference_MaxValue2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.CanChangeStackAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::CanChangeStackAmount(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "CanChangeStackAmount");

	Params::UFeat_GunMage_C_CanChangeStackAmount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_GunMage.Feat_GunMage_C.GetManualHUDIconValues
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              OutStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDuration                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetManualHUDIconValues_outStackCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetManualHUDIconValues_outDuration                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetManualHUDIconValues_outTimeRemaining                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, int32 CallFunc_GetManualHUDIconValues_outStackCount, float CallFunc_GetManualHUDIconValues_outDuration, float CallFunc_GetManualHUDIconValues_outTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid2, float CallFunc_BreakResourcePoolReference_CurrentValue2, float CallFunc_BreakResourcePoolReference_MinValue2, float CallFunc_BreakResourcePoolReference_MaxValue2, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid3, float CallFunc_BreakResourcePoolReference_CurrentValue3, float CallFunc_BreakResourcePoolReference_MinValue3, float CallFunc_BreakResourcePoolReference_MaxValue3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "GetManualHUDIconValues");

	Params::UFeat_GunMage_C_GetManualHUDIconValues_Params Parms{};

	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_GetManualHUDIconValues_outStackCount = CallFunc_GetManualHUDIconValues_outStackCount;
	Parms.CallFunc_GetManualHUDIconValues_outDuration = CallFunc_GetManualHUDIconValues_outDuration;
	Parms.CallFunc_GetManualHUDIconValues_outTimeRemaining = CallFunc_GetManualHUDIconValues_outTimeRemaining;
	Parms.CallFunc_BreakResourcePoolReference_bValid2 = CallFunc_BreakResourcePoolReference_bValid2;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue2 = CallFunc_BreakResourcePoolReference_CurrentValue2;
	Parms.CallFunc_BreakResourcePoolReference_MinValue2 = CallFunc_BreakResourcePoolReference_MinValue2;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue2 = CallFunc_BreakResourcePoolReference_MaxValue2;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid3 = CallFunc_BreakResourcePoolReference_bValid3;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue3 = CallFunc_BreakResourcePoolReference_CurrentValue3;
	Parms.CallFunc_BreakResourcePoolReference_MinValue3 = CallFunc_BreakResourcePoolReference_MinValue3;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue3 = CallFunc_BreakResourcePoolReference_MaxValue3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStackCount != nullptr)
		*OutStackCount = Parms.OutStackCount;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = Parms.OutTimeRemaining;

}


// Function Feat_GunMage.Feat_GunMage_C.BumpSpellweavingTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::BumpSpellweavingTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "BumpSpellweavingTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.Feat_GunMage_SpecialReload_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::Feat_GunMage_SpecialReload_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "Feat_GunMage_SpecialReload_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.OakPassiveOnReloadEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Completed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AmmoGiven                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::OakPassiveOnReloadEnded(class AWeapon* Weapon, bool Completed, bool AmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "OakPassiveOnReloadEnded");

	Params::UFeat_GunMage_C_OakPassiveOnReloadEnded_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.Completed = Completed;
	Parms.AmmoGiven = AmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_GunMage.Feat_GunMage_C.SpellweavingStackDurationPoolDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UFeat_GunMage_C::SpellweavingStackDurationPoolDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "SpellweavingStackDurationPoolDepleted");

	Params::UFeat_GunMage_C_SpellweavingStackDurationPoolDepleted_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_GunMage.Feat_GunMage_C.OakPassiveOnCausedDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFeat_GunMage_C::OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "OakPassiveOnCausedDeath");

	Params::UFeat_GunMage_C_OakPassiveOnCausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_GunMage.Feat_GunMage_C.SetupSpellComboChallenge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::SetupSpellComboChallenge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "SetupSpellComboChallenge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.CloseChallengeGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::CloseChallengeGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "CloseChallengeGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.OpenChallengeGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::OpenChallengeGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "OpenChallengeGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.OakPassiveOnSpellCastFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 SpellMod                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_GunMage_C::OakPassiveOnSpellCastFired(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "OakPassiveOnSpellCastFired");

	Params::UFeat_GunMage_C_OakPassiveOnSpellCastFired_Params Parms{};

	Parms.SpellMod = SpellMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_GunMage.Feat_GunMage_C.SpellCastInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 GrenadeMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_GunMage_C::SpellCastInit(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "SpellCastInit");

	Params::UFeat_GunMage_C_SpellCastInit_Params Parms{};

	Parms.GrenadeMod = GrenadeMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_GunMage.Feat_GunMage_C.ExecuteUbergraph_Feat_GunMage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_AddSpellweavingStacks_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAllSpellweavingStacks_Res                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAllSpellweavingStacks_Res1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RemoveSpellweavingStacks_Res                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Completed                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_AmmoGiven                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool                                  (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UDamageComponent*            K2Node_Event_Damaged                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_Event_Details                                             (None)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate    (NoDestructor, ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckChallengeStatus_Complete                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueOfAttributeAsInteger_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_Event_SpellMod                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_EquippedPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class AGrenadeMod*                 K2Node_CustomEvent_GrenadeMod                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_CustomEvent_EquippedPlayer                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue1                  (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_GunMage_C::ExecuteUbergraph_Feat_GunMage(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Variable, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, int32 CallFunc_AddSpellweavingStacks_Res, bool CallFunc_RemoveAllSpellweavingStacks_Res, bool CallFunc_RemoveAllSpellweavingStacks_Res1, int32 CallFunc_RemoveSpellweavingStacks_Res, class AWeapon* K2Node_Event_Weapon, bool K2Node_Event_Completed, bool K2Node_Event_AmmoGiven, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_CheckChallengeStatus_Complete, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_ClassIsChildOf_ReturnValue3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue1, bool CallFunc_Set_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "ExecuteUbergraph_Feat_GunMage");

	Params::UFeat_GunMage_C_ExecuteUbergraph_Feat_GunMage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;
	Parms.CallFunc_AddSpellweavingStacks_Res = CallFunc_AddSpellweavingStacks_Res;
	Parms.CallFunc_RemoveAllSpellweavingStacks_Res = CallFunc_RemoveAllSpellweavingStacks_Res;
	Parms.CallFunc_RemoveAllSpellweavingStacks_Res1 = CallFunc_RemoveAllSpellweavingStacks_Res1;
	Parms.CallFunc_RemoveSpellweavingStacks_Res = CallFunc_RemoveSpellweavingStacks_Res;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Completed = K2Node_Event_Completed;
	Parms.K2Node_Event_AmmoGiven = K2Node_Event_AmmoGiven;
	Parms.K2Node_CustomEvent_ResourcePool = K2Node_CustomEvent_ResourcePool;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Event_Damaged = K2Node_Event_Damaged;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue1 = CallFunc_ClassIsChildOf_ReturnValue1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue2 = CallFunc_ClassIsChildOf_ReturnValue2;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_CheckChallengeStatus_Complete = CallFunc_CheckChallengeStatus_Complete;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValueOfAttributeAsInteger_ReturnValue = CallFunc_GetValueOfAttributeAsInteger_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue3 = CallFunc_ClassIsChildOf_ReturnValue3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.K2Node_Event_SpellMod = K2Node_Event_SpellMod;
	Parms.K2Node_Event_EquippedPlayer = K2Node_Event_EquippedPlayer;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_CustomEvent_GrenadeMod = K2Node_CustomEvent_GrenadeMod;
	Parms.K2Node_CustomEvent_EquippedPlayer = K2Node_CustomEvent_EquippedPlayer;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue1 = CallFunc_GetResourcePoolByResource_ReturnValue1;
	Parms.CallFunc_Set_Remove_ReturnValue = CallFunc_Set_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_GunMage.Feat_GunMage_C.Feat_GunMage_SpellweavingStackGained__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::Feat_GunMage_SpellweavingStackGained__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "Feat_GunMage_SpellweavingStackGained__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.Feat_GunMage_SpellweavingStackLost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::Feat_GunMage_SpellweavingStackLost__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "Feat_GunMage_SpellweavingStackLost__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_GunMage.Feat_GunMage_C.Feat_GunMage_SpecialReload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_GunMage_C::Feat_GunMage_SpecialReload__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_GunMage_C", "Feat_GunMage_SpecialReload__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


