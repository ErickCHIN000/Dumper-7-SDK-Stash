#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Player.BPI_Player_C
class IBPI_Player_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Player_C* GetDefaultObj();

	void SendOxygenToClient(double NewOxygen);
	void CreateNotificationUI(class FText Text, class UTexture2D* Image, const struct FLinearColor& Color, double UI_Delay);
	void StopMontage(class UAnimMontage* Montage);
	void PlayMontage(class UAnimMontage* Montage, double Play_Rate);
	void PlayerDeath();
	void SendRadiationToClient(double NewRadiation);
	void SendThirstToClient(double NewThirst);
	void SendHungerToClient(double NewHunger);
	void SendHealthToClient(double NewHealth);
	void UpdatePlayerSpeed(double NewSpeed);
	void GetPlayerRef(class ABP_PlayerCharacter_C** Player);
	void SendStaminaToClient(double NewStamina);
};

}


