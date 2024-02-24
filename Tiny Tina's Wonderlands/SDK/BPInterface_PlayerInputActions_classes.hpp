#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C
class IBPInterface_PlayerInputActions_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPInterface_PlayerInputActions_C* GetDefaultObj();

	void MeleeStop();
	void Ow_Player_RE_Stun();
	void Ow_camera_reset();
	void Ow_camera_zoom();
	void UseBanner();
	void ReturnToOverworldTransition(bool IsReturning);
	void RandomEncounterTransition(bool IsEncountering);
	void DoMelee();
	void GroundSlam_End(float Distance);
};

}


