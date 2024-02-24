#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AI.BPI_AI_C
class IBPI_AI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AI_C* GetDefaultObj();

	void GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset);
	void CanAddMarkerToAI_(bool* CanAdd_);
	void AddMarker(class UWidgetComponent* Marker);
	void GetMesh(class USkeletalMeshComponent** Mesh);
	void GetMovementSpeeds(double* RoamingSpeed, double* AlertSpeed, double* AttackSpeed);
	void CanStompAI_(bool* Stomp_);
	void AIHealthBarInfo(class FString* Name, bool* Boss_);
};

}


