#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x880 - 0x874)
// BlueprintGeneratedClass BP_Gravestone_DBNO.BP_Gravestone_DBNO_C
class ABP_Gravestone_DBNO_C : public ABP_Gravestone_C
{
public:
	uint8                                        Pad_265C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x878(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Gravestone_DBNO_C* GetDefaultObj();

	void ServerHandleAssignedPlayer(class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
};

}


