#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ICharacterStatObserver.ICharacterStatObserver_C
// (None)

class UClass* IICharacterStatObserver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ICharacterStatObserver_C");

	return Clss;
}


// ICharacterStatObserver_C ICharacterStatObserver.Default__ICharacterStatObserver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IICharacterStatObserver_C* IICharacterStatObserver_C::GetDefaultObj()
{
	static class IICharacterStatObserver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IICharacterStatObserver_C*>(IICharacterStatObserver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetSkills
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHPlayerStat_Skills*        Skills                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetSkills(class USHPlayerStat_Skills** Skills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetSkills");

	Params::IICharacterStatObserver_C_GetSkills_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Skills != nullptr)
		*Skills = Parms.Skills;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetArmorResist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AnomalyLessMod                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PsyLessMod                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TempLessMod                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetArmorResist(float* AnomalyLessMod, float* PsyLessMod, float* TempLessMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetArmorResist");

	Params::IICharacterStatObserver_C_GetArmorResist_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnomalyLessMod != nullptr)
		*AnomalyLessMod = Parms.AnomalyLessMod;

	if (PsyLessMod != nullptr)
		*PsyLessMod = Parms.PsyLessMod;

	if (TempLessMod != nullptr)
		*TempLessMod = Parms.TempLessMod;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetSkillTree
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHSkillTreeComponent*       SkillTree                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetSkillTree(class USHSkillTreeComponent** SkillTree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetSkillTree");

	Params::IICharacterStatObserver_C_GetSkillTree_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SkillTree != nullptr)
		*SkillTree = Parms.SkillTree;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsPoisoned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetIsPoisoned(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetIsPoisoned");

	Params::IICharacterStatObserver_C_GetIsPoisoned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetNotesJournal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHJournalComponent*         Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetNotesJournal(class USHJournalComponent** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetNotesJournal");

	Params::IICharacterStatObserver_C_GetNotesJournal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetCapacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHPlayerStat_CarryingCapacity*Result                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetCapacity(class USHPlayerStat_CarryingCapacity** Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetCapacity");

	Params::IICharacterStatObserver_C_GetCapacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetQuestDiary
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHQuestDiaryComponent*      Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetQuestDiary(class USHQuestDiaryComponent** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetQuestDiary");

	Params::IICharacterStatObserver_C_GetQuestDiary_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHasDisease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetHasDisease(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetHasDisease");

	Params::IICharacterStatObserver_C_GetHasDisease_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHasTrauma
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetHasTrauma(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetHasTrauma");

	Params::IICharacterStatObserver_C_GetHasTrauma_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsOverloaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetIsOverloaded(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetIsOverloaded");

	Params::IICharacterStatObserver_C_GetIsOverloaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsInStress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetIsInStress(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetIsInStress");

	Params::IICharacterStatObserver_C_GetIsInStress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsExhaustion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetIsExhaustion(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetIsExhaustion");

	Params::IICharacterStatObserver_C_GetIsExhaustion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsDehydration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetIsDehydration(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetIsDehydration");

	Params::IICharacterStatObserver_C_GetIsDehydration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsBleeding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IICharacterStatObserver_C::GetIsBleeding(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetIsBleeding");

	Params::IICharacterStatObserver_C_GetIsBleeding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetExpToLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetExpToLevel(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetExpToLevel");

	Params::IICharacterStatObserver_C_GetExpToLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetCurrentExp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetCurrentExp(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetCurrentExp");

	Params::IICharacterStatObserver_C_GetCurrentExp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHPlayerStat_Level*         Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetLevel(class USHPlayerStat_Level** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetLevel");

	Params::IICharacterStatObserver_C_GetLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetArmor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ArmorMod                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetArmor(float* Value, float* ArmorMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetArmor");

	Params::IICharacterStatObserver_C_GetArmor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (ArmorMod != nullptr)
		*ArmorMod = Parms.ArmorMod;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetTemperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetTemperature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetTemperature");

	Params::IICharacterStatObserver_C_GetTemperature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetStress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetStress(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetStress");

	Params::IICharacterStatObserver_C_GetStress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetThirsty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetThirsty(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetThirsty");

	Params::IICharacterStatObserver_C_GetThirsty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHunger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetHunger(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetHunger");

	Params::IICharacterStatObserver_C_GetHunger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IICharacterStatObserver_C::GetHealth(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ICharacterStatObserver_C", "GetHealth");

	Params::IICharacterStatObserver_C_GetHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}

}


