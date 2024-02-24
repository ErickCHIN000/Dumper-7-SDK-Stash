#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemInflexion.OnlineIdentityServiceLibrary
class UOnlineIdentityServiceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOnlineIdentityServiceLibrary* GetDefaultObj();

	void OnLoginPlayerWithProfileComplete__DelegateSignature(struct FOnlineServiceStatus& Status);
	bool LogoutPlayer(class UObject* WorldContextObject);
	void LoginPlayerWithProfile(class UObject* WorldContextObject, const class FString& AccountId, const class FString& AccountToken, struct FSelectableProfile& Profile, FDelegateProperty_& OnComplete);
};

}


