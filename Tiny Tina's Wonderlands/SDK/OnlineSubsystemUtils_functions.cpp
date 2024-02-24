#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemUtils.BeaconChannel
// (None)

class UClass* UBeaconChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeaconChannel");

	return Clss;
}


// BeaconChannel OnlineSubsystemUtils.Default__BeaconChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UBeaconChannel* UBeaconChannel::GetDefaultObj()
{
	static class UBeaconChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeaconChannel*>(UBeaconChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.DownloadableContentData
// (None)

class UClass* UDownloadableContentData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadableContentData");

	return Clss;
}


// DownloadableContentData OnlineSubsystemUtils.Default__DownloadableContentData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadableContentData* UDownloadableContentData::GetDefaultObj()
{
	static class UDownloadableContentData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadableContentData*>(UDownloadableContentData::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.DownloadableContentLicenseData
// (None)

class UClass* UDownloadableContentLicenseData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadableContentLicenseData");

	return Clss;
}


// DownloadableContentLicenseData OnlineSubsystemUtils.Default__DownloadableContentLicenseData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadableContentLicenseData* UDownloadableContentLicenseData::GetDefaultObj()
{
	static class UDownloadableContentLicenseData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadableContentLicenseData*>(UDownloadableContentLicenseData::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.DownloadablePackageData
// (None)

class UClass* UDownloadablePackageData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadablePackageData");

	return Clss;
}


// DownloadablePackageData OnlineSubsystemUtils.Default__DownloadablePackageData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadablePackageData* UDownloadablePackageData::GetDefaultObj()
{
	static class UDownloadablePackageData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadablePackageData*>(UDownloadablePackageData::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.DownloadablePackageLicenseItem
// (None)

class UClass* UDownloadablePackageLicenseItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadablePackageLicenseItem");

	return Clss;
}


// DownloadablePackageLicenseItem OnlineSubsystemUtils.Default__DownloadablePackageLicenseItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadablePackageLicenseItem* UDownloadablePackageLicenseItem::GetDefaultObj()
{
	static class UDownloadablePackageLicenseItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadablePackageLicenseItem*>(UDownloadablePackageLicenseItem::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.IpNetDriver
// (None)

class UClass* UIpNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpNetDriver");

	return Clss;
}


// IpNetDriver OnlineSubsystemUtils.Default__IpNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpNetDriver* UIpNetDriver::GetDefaultObj()
{
	static class UIpNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpNetDriver*>(UIpNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.IpBeaconNetDriver
// (None)

class UClass* UIpBeaconNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpBeaconNetDriver");

	return Clss;
}


// IpBeaconNetDriver OnlineSubsystemUtils.Default__IpBeaconNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpBeaconNetDriver* UIpBeaconNetDriver::GetDefaultObj()
{
	static class UIpBeaconNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpBeaconNetDriver*>(UIpBeaconNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.IpConnection
// (None)

class UClass* UIpConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IpConnection");

	return Clss;
}


// IpConnection OnlineSubsystemUtils.Default__IpConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UIpConnection* UIpConnection::GetDefaultObj()
{
	static class UIpConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UIpConnection*>(UIpConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeacon
// (None)

class UClass* UOnlineBeacon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeacon");

	return Clss;
}


// OnlineBeacon OnlineSubsystemUtils.Default__OnlineBeacon
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineBeacon* UOnlineBeacon::GetDefaultObj()
{
	static class UOnlineBeacon* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineBeacon*>(UOnlineBeacon::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeaconClient
// (None)

class UClass* UOnlineBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconClient");

	return Clss;
}


// OnlineBeaconClient OnlineSubsystemUtils.Default__OnlineBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineBeaconClient* UOnlineBeaconClient::GetDefaultObj()
{
	static class UOnlineBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineBeaconClient*>(UOnlineBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineBeaconHost
// (None)

class UClass* UOnlineBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineBeaconHost");

	return Clss;
}


// OnlineBeaconHost OnlineSubsystemUtils.Default__OnlineBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineBeaconHost* UOnlineBeaconHost::GetDefaultObj()
{
	static class UOnlineBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineBeaconHost*>(UOnlineBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// (None)

class UClass* UOnlineEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineEngineInterfaceImpl");

	return Clss;
}


// OnlineEngineInterfaceImpl OnlineSubsystemUtils.Default__OnlineEngineInterfaceImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineEngineInterfaceImpl* UOnlineEngineInterfaceImpl::GetDefaultObj()
{
	static class UOnlineEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineEngineInterfaceImpl*>(UOnlineEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlinePIESettings
// (None)

class UClass* UOnlinePIESettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlinePIESettings");

	return Clss;
}


// OnlinePIESettings OnlineSubsystemUtils.Default__OnlinePIESettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlinePIESettings* UOnlinePIESettings::GetDefaultObj()
{
	static class UOnlinePIESettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlinePIESettings*>(UOnlinePIESettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.OnlineSessionClient
// (None)

class UClass* UOnlineSessionClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSessionClient");

	return Clss;
}


// OnlineSessionClient OnlineSubsystemUtils.Default__OnlineSessionClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSessionClient* UOnlineSessionClient::GetDefaultObj()
{
	static class UOnlineSessionClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSessionClient*>(UOnlineSessionClient::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// (SceneComponent)

class UClass* UVoipListenerSynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipListenerSynthComponent");

	return Clss;
}


// VoipListenerSynthComponent OnlineSubsystemUtils.Default__VoipListenerSynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipListenerSynthComponent* UVoipListenerSynthComponent::GetDefaultObj()
{
	static class UVoipListenerSynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipListenerSynthComponent*>(UVoipListenerSynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoipListenerSynthComponent::IsIdling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipListenerSynthComponent", "IsIdling");

	Params::UVoipListenerSynthComponent_IsIdling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


