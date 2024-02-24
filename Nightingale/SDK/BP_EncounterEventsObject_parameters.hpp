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

// 0x18 (0x18 - 0x0)
// Function BP_EncounterEventsObject.BP_EncounterEventsObject_C.OnOfferingTaken__DelegateSignature
struct UBP_EncounterEventsObject_C_OnOfferingTaken__DelegateSignature_Params
{
public:
	class AActor*                                Offering_Structure;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Offering_Taker;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Offering_Score;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_EncounterEventsObject.BP_EncounterEventsObject_C.OnOfferingMade__DelegateSignature
struct UBP_EncounterEventsObject_C_OnOfferingMade__DelegateSignature_Params
{
public:
	class AActor*                                Offering_Structure;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Offering_Instigator;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Offered_Item;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterEventsObject.BP_EncounterEventsObject_C.OnEncounterInteraction__DelegateSignature
struct UBP_EncounterEventsObject_C_OnEncounterInteraction__DelegateSignature_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


