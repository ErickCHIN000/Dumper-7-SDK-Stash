#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PLayerStandin.BPI_PlayerStandin_C
class IBPI_PlayerStandin_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlayerStandin_C* GetDefaultObj();

	void Audio_StandIn_Rogue_Stealth();
	void Audio_StandIn_Rogue_LivingBlade();
	void Audio_StandIn_Ranger_Cryonado();
	void Audio_StandIn_Ranger_CalledShot();
	void Audio_StandIn_Necromancer_ReaperOfSouls();
	void Audio_StandIn_Necromancer_Sacrifice();
	void Audio_StandIn_Knight_FireyRedemption();
	void Audio_StandIn_Knight_HammerToss();
	void Audio_StandIn_GunMage_Polymorph();
	void Audio_StandIn_Barbarian_Whirlwind();
	void Audio_Standin_Barbarian_AxeSlam();
};

}


