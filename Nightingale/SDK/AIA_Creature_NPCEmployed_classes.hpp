#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_NPCEmployed.AIA_Creature_NPCEmployed_C
class UAIA_Creature_NPCEmployed_C : public UAIA_Creature_Ambient_C
{
public:
	class UAICompanionComponent*                 CompanionComponent;                                // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCEmployed_C* GetDefaultObj();

	bool Initialize(bool CallFunc_IsValid_ReturnValue, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Initialize_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, bool CallFunc_CheckTargetRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


