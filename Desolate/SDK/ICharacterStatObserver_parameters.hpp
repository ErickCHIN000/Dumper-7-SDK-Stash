#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetSkills
struct IICharacterStatObserver_C_GetSkills_Params
{
public:
	class USHPlayerStat_Skills*                  Skills;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetArmorResist
struct IICharacterStatObserver_C_GetArmorResist_Params
{
public:
	float                                        AnomalyLessMod;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PsyLessMod;                                        // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TempLessMod;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetSkillTree
struct IICharacterStatObserver_C_GetSkillTree_Params
{
public:
	class USHSkillTreeComponent*                 SkillTree;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsPoisoned
struct IICharacterStatObserver_C_GetIsPoisoned_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetNotesJournal
struct IICharacterStatObserver_C_GetNotesJournal_Params
{
public:
	class USHJournalComponent*                   Return;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetCapacity
struct IICharacterStatObserver_C_GetCapacity_Params
{
public:
	class USHPlayerStat_CarryingCapacity*        Result;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetQuestDiary
struct IICharacterStatObserver_C_GetQuestDiary_Params
{
public:
	class USHQuestDiaryComponent*                Return;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHasDisease
struct IICharacterStatObserver_C_GetHasDisease_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHasTrauma
struct IICharacterStatObserver_C_GetHasTrauma_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsOverloaded
struct IICharacterStatObserver_C_GetIsOverloaded_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsInStress
struct IICharacterStatObserver_C_GetIsInStress_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsExhaustion
struct IICharacterStatObserver_C_GetIsExhaustion_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsDehydration
struct IICharacterStatObserver_C_GetIsDehydration_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetIsBleeding
struct IICharacterStatObserver_C_GetIsBleeding_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetExpToLevel
struct IICharacterStatObserver_C_GetExpToLevel_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetCurrentExp
struct IICharacterStatObserver_C_GetCurrentExp_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetLevel
struct IICharacterStatObserver_C_GetLevel_Params
{
public:
	class USHPlayerStat_Level*                   Return;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetArmor
struct IICharacterStatObserver_C_GetArmor_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArmorMod;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetTemperature
struct IICharacterStatObserver_C_GetTemperature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetStress
struct IICharacterStatObserver_C_GetStress_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetThirsty
struct IICharacterStatObserver_C_GetThirsty_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHunger
struct IICharacterStatObserver_C_GetHunger_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ICharacterStatObserver.ICharacterStatObserver_C.GetHealth
struct IICharacterStatObserver_C_GetHealth_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


